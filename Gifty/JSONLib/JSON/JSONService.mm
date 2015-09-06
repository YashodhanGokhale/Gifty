
#import "JSONService.h"
#import "JSONUtils.h"
#import "JSONConstants.h"

@implementation JSONService
//@synthesize headProps;
@synthesize serviceUrl;

#pragma mark - overridden methods from super class

- (id)init
{
    if ((self = [super init])) 
	{
       
    }
    return self;
}
 
#pragma mark - protected methods designated for child classes to use

- (void) addHeadProp:(NSString *)key withValue:(id)value 
{
    if (!headProps) 
    {
        headProps = [[NSMutableDictionary alloc] init];
    }
    [headProps setObject:value forKey:key];
}

- (NSString*) GetMessage
{
    return nil;
}

- (NSMutableURLRequest *) buildRequest:(NSString *)aMessage
{
    [self prepareUrlAndHeadProps];
    return [JSONUtils buildRequestWithRequestObject:self.JSONRequestParam];
}

- (void) buildServiceUrlWithName:(NSString *)serviceName 
{
    // Prepare Header
    
    NSString* hostName = [self GetHostName];
    if(hostName)
    {
        [self addHeadProp:@"Host" withValue:hostName];
    }
    
    NSString* cookie = [self GetCookie];
    if(cookie)
    {
        [self addHeadProp:@"Cookie" withValue:cookie];
    }
    else
    {
        [self addHeadProp:@"Cookie" withValue:@""];
    }
    
    NSString * msgLength;
    if([self.JSONRequestParam getRequestBody])
    {
        msgLength = [NSString stringWithFormat:@"%i", [[self.JSONRequestParam getRequestBody] length]]; 
    }
    else
    {
        msgLength = [NSString stringWithFormat:@"0"]; 
    }

    NSString* transactionId = [NSString stringWithFormat:@"%d",[self.JSONRequestParam getTransactionId]];
    if (transactionId)
    {
        [self addHeadProp:TRANSACTION_ID withValue:transactionId];
    }
    
    if ([[self.JSONRequestParam getHttpRequestType] isEqualToString:REQUEST_TYPE_POST])
    {
        //[self addHeadProp:@"Content-Type" withValue:@"application/x-www-form-urlencoded"];
        //changing header format to check for application/json
        [self addHeadProp:@"Content-Type" withValue:@"application/json"];
        [self addHeadProp:@"Authorization" withValue:@"Basic ZmVsaXhxYTpwaWdnbGUxbXVzdA=="];
        [self addHeadProp:@"Accept" withValue:@"text/*"];
        [self addHeadProp:@"User-Agent" withValue:@"iPhone"];
        [self addHeadProp:@"Content-Length" withValue:msgLength];
    }

    NSString* serverURL = [self GetDomainURL];
    
    // Prepare URL
    NSMutableString* serviceURL = [[NSMutableString alloc]initWithString:KHTTP];
    
    if(serverURL)
    {
        [serviceURL appendString:serverURL];
    }
    if(serviceName)
    {
        [serviceURL appendString:serviceName];
    }
    
    // Make that as a part of out JSON Request Object
    [self.JSONRequestParam addServiceURL:serviceURL];
    [serviceURL release];
    serviceURL =nil;
    [self.JSONRequestParam addHTTPHeader:headProps];
}

-(NSString*) GetDomainURL
{
    return @"";
}

-(NSString*) GetCookie
{
    return @"nil";
}

- (id) parseResponse:(NSString *)responseString 
{
    return [self parseResponseWithJSON:responseString];
}

-(NSError*) GetErrorForResponse:(NSString*) aResponse
{
    MSJsonParser * jsonParser = [[MSJsonParser alloc]init];
    NSDictionary *responseData = (NSDictionary *) [jsonParser objectWithString:aResponse error:nil];
    [jsonParser release];
    jsonParser = nil;
    if (responseData && [responseData objectForKey:MS_ERR])
    {
        NSDictionary* ms_error_dict = (NSDictionary*)[responseData objectForKey:MS_ERR];
        NSDictionary* errorsDict = nil;
       errorsDict = (NSDictionary*)[ms_error_dict objectForKey:ERRORS];
        
        /*First check errors dictionary, In some cases error dictionary is comes in errors
         If it is not nil get the error from errors dictionary e.g 
         If new project is create and task module is not introduced for that project if we tried to creat task for that project
         in this case this errorcome in errors dictionary comes.
         */
        
        NSDictionary* errorDict = nil;
        if (errorsDict != nil && ![errorsDict isKindOfClass:[NSNull class]])
        {
          errorDict  = (NSDictionary*)[errorsDict objectForKey:ERROR];
        }
        else if(![ms_error_dict isKindOfClass:[NSNull class]])
        {
          errorDict  = (NSDictionary*)[ms_error_dict objectForKey:ERROR];
        }
        
        if(errorDict == nil && ![errorsDict isKindOfClass:[NSNull class]])
        {
            errorDict = (NSDictionary*)[ms_error_dict objectForKey:ERROR];
        }
        if(errorDict && ![errorDict isKindOfClass:[NSNull class]])
        {
            NSString* errorString = [NSString stringWithFormat:@"%@",[errorDict objectForKey:ERROR_MESSAGE]];
            NSArray *allKeys = [errorDict allKeys];
            BOOL retVal = [allKeys containsObject:STATUS];
            NSMutableDictionary *statusdict = nil;
            NSError* error = nil ;
            if (retVal)
            {
                statusdict = [[NSMutableDictionary alloc]init];
                if([errorDict objectForKey:STATUS] &&
                   ![[errorDict objectForKey:STATUS] isKindOfClass:[NSNull class]])
                {
                    [statusdict setObject:[errorDict objectForKey:STATUS] forKey:STATUS];
                }
                if([errorDict objectForKey:MinPasswordLen] &&
                   ![[errorDict objectForKey:MinPasswordLen] isKindOfClass:[NSNull class]])
                {
                    [statusdict setObject:[errorDict objectForKey:MinPasswordLen] forKey:MinPasswordLen];
                }
                if([errorDict objectForKey:PasswordComplexity] &&
                   ![[errorDict objectForKey:PasswordComplexity] isKindOfClass:[NSNull class]])
                {
                    [statusdict setObject:[errorDict objectForKey:PasswordComplexity] forKey:PasswordComplexity];
                }
                error = [NSError errorWithDomain:errorString code:MS_ERROR_CODE userInfo:statusdict];
            }
            else
            {
                if ([[errorDict objectForKey:KeyErrorCode] isEqualToString:K_User_Status_Suspended]) {

                    error = [NSError errorWithDomain:errorString code:USER_SUSPENDED_ERROR_CODE userInfo:nil];
                    
                }else{
                    error = [NSError errorWithDomain:errorString code:MS_ERROR_CODE userInfo:nil];
                }
                
            }
            return error;
        }
        NSDictionary* access = (NSDictionary*)[ms_error_dict objectForKey:ACCESS];
        if(access)
        {
            NSString* status =  [access objectForKey:STATUS];
            if (status && ![status isKindOfClass:[NSNull class]])
            {
                if([status compare:WIPE_OUT_PENDING] == 0 || [status compare:WIPE_OUT] == 0)
                {
                    NSString* errorString = [NSString stringWithFormat:@"%@",[access objectForKey:MESSAGE]];
                    NSError* error = [NSError errorWithDomain:errorString code:WIPE_OUT_ERROR_CODE userInfo:nil];
                    return error;
                }
                else if([status compare:DISABLE] == 0)
                {
                    NSString* errorString = [NSString stringWithFormat:@"%@",[access objectForKey:MESSAGE]];
                    NSError* error = [NSError errorWithDomain:errorString code:DISABLE_ERROR_CODE userInfo:nil];
                    return error;
                }
            }
        }
    }
    else if (responseData && [responseData objectForKey:MS_RESPONSE])
    {
        NSDictionary* responseDict = [responseData objectForKey:MS_RESPONSE];
        NSDictionary* errorDict = [responseDict objectForKey:ERROR];
        
        NSError* error = nil;
        if(errorDict && [errorDict objectForKey:ERROR_MESSAGE])
        {
            error = [NSError errorWithDomain:[errorDict objectForKey:ERROR_MESSAGE] code:MS_ERROR_CODE userInfo:nil];
        }
        
        return error;
    }
    return nil;
}

#pragma mark - protected methods which needs child classes to override

- (id) parseResponseWithJSON:(NSString *)responseString
{
    return nil;
}

- (void) prepareUrlAndHeadProps 
{
    
}

#pragma mark - connection callbacks 

- (void) connection:(NSURLConnection *)connection didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge*)challenge
{

}

#pragma mark - destroy methods

- (void) dealloc 
{
    [headProps release];
    headProps = nil;
    
    [self.serviceUrl release];
    self.serviceUrl = nil;
     
    [super dealloc];
}

#pragma mark - JSONParserDelegate methods

-(void) ParseError
{
    
}
 
#pragma mark - Parser UTILITY methods


@end
