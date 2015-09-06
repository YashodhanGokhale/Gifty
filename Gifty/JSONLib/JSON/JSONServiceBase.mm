#import "JSONServiceBase.h"
#import "MSLogger.h"
#import "MSIPhoneConverter.h"
#import "MangoAppsServiceProvider.h"
#import "MSUtils.h"
#import "MSLogger.h"

static int JS_CONNECTION_TIMEOUT = 180;

@interface JSONServiceBase ()

@property (nonatomic, retain) NSMutableData * responseData;
@property (nonatomic, retain) NSURLConnection * connection;

- (void) sendJSONRequest:(NSURLRequest *)request;
- (void) handleError:(NSError *)error;
- (void) handleException:(NSException *)exception;
- (void) scheduleTimeout;
- (void) onTimeout;
- (void) cancleTimeout;

@end


@implementation JSONServiceBase

@synthesize errorObj;
@synthesize JSONRequestParam;
@synthesize responseData;
@synthesize connection;
@synthesize wasMovedToBackground;

#pragma mark - public methods

- (void) request 
{ 
    if (JSONRequestParam)
    {
        wasMovedToBackground = NO;
        
        NSString* messageBody  = [self GetMessage];
        NSMutableURLRequest * request = [self buildRequest:messageBody];
        [request setTimeoutInterval:JS_CONNECTION_TIMEOUT];
        
        if (request) 
        {
            [self LogRequestInfo];
            [self sendJSONRequest:request];
        }
        else 
        {
            NSError* error = [NSError errorWithDomain:@"Failed to build the request" code:-1 userInfo:nil];
            [self fail:error];
        }
    } 
    else
    {
        NSError* error = [NSError errorWithDomain:@"Can not find JSON request parameter to build up request" code:-1 userInfo:nil];
        [self fail:error]; 
    }
}


- (NSMutableURLRequest *) buildRequest:(NSString *)aMessage
{
    return nil;
}

#pragma mark - protected methods, default implementations, child classes need to override these methods to perform customized behaviours

- (void) sendNotificationOnSuccess:(id)value 
{
    
}

- (void) sendNotificationOnFailure:(id)errorInfo 
{
    
}

-(NSDictionary*)GetErrorDictionry
{
    return [NSDictionary dictionaryWithObjectsAndKeys:self,@"self",nil];
}

- (NSString *) parseError 
{
    return (NSString *) errorObj;
}

-(NSError*) GetErrorForResponse:(NSString*) aResponse
{
    return nil;
}

#pragma mark - protected methods, generic methods for child classes to use, do not override unless with designated purposes

- (void) fail:(NSError *)aError 
{
    MSChar* errorInfo = MSIPhoneConverter::NSStringToChar(aError.localizedDescription);

    if (errorInfo)
    {
        LogError(errorInfo);
        delete errorInfo;
        errorInfo = NULL;
    }
    
    [self failWithErrorInfo:aError];
}

- (void) failWithErrorInfo:(id)errorInfo 
{
    [self sendNotificationOnFailure:errorInfo];
    self.responseData = nil;
    self.connection = nil;
}

#pragma mark - private methods

- (void) sendJSONRequest:(NSURLRequest *)request 
{
    @try 
    {
        //[self scheduleTimeout];
        
        NSOperationQueue* operationQueue = [[NSOperationQueue alloc] init];
        
        //add to operations queue
		NSInvocationOperation* operation = [[NSInvocationOperation alloc] initWithTarget:self selector:@selector(ExecuteURL:) object:request];
		[operationQueue addOperation:operation];
		[operation release];
        [operationQueue release];
    } 
    @catch (NSException *exception) 
    {
        [self handleException:exception];
    }
}

-(void) ExecuteURL:(NSMutableURLRequest*) aRequest
{
    NSLog(@"Request START ------------------------------------------------" );
    
    NSString* url = [NSString stringWithFormat:@"%@",[[aRequest URL] absoluteURL]];
    MSChar* loginfo = MSIPhoneConverter::NSStringToChar(url);
    LogInfo(loginfo);
    delete loginfo;
    loginfo = NULL;
    
    NSString* logString = [[NSString alloc] initWithData:[aRequest HTTPBody] encoding:NSUTF8StringEncoding];
    NSLog(@"%@ - %@ - %@ -%@", [[aRequest URL] absoluteURL], [aRequest allHTTPHeaderFields], [aRequest HTTPMethod], logString);
    [logString release];
    logString = nil;
    
    NSLog(@"Request END ------------------------------------------------" );
    
 	
	[[NSURLCache sharedURLCache] setMemoryCapacity:0];
	[[NSURLCache sharedURLCache] setDiskCapacity:0];
    
    NSOperationQueue *queue = [[NSOperationQueue alloc] init];

    [NSURLConnection sendAsynchronousRequest:aRequest
                                       queue:queue
                           completionHandler:^(NSURLResponse *response, NSData *data, NSError *connectionError) {
                               
                               int statusCode = 200;
                               if(response)
                               {
                                   NSHTTPURLResponse *httpResponse = (NSHTTPURLResponse *)response;
                                   statusCode = [httpResponse statusCode];
                               }
                               else
                               {
                                   if(connectionError)
                                   {
                                       statusCode = connectionError.code;
                                   }
                               }
                               
                               if(connectionError)
                               {
                                   NSDictionary* connectionDict = connectionError.userInfo;
                                   
                                   NSString* failingURL = @"";
                                   if(connectionDict && [connectionDict objectForKey:NSURLErrorFailingURLStringErrorKey])
                                   {
                                       failingURL = [connectionDict objectForKey:NSURLErrorFailingURLStringErrorKey];
                                   }
                                   
                                   NSDate * now = [NSDate date];
                                   NSDateFormatter *outputFormatter = [[NSDateFormatter alloc] init];
                                   [outputFormatter setDateFormat:@"yyyy-MM-dd hh:mm:ss"];
                                   NSString *newDateString = [outputFormatter stringFromDate:now];
                                   
                                   NSString *logerror = [NSString stringWithFormat:@"Request Time : %@ || Service Type: %@ || Domain: %@ || Error Code: %d || Error String: %@ || http status code %d || Request Body %@ || Request URL %@", newDateString,[self.JSONRequestParam getServiceName],connectionError.domain ,connectionError.code, connectionError.localizedDescription,statusCode,[self.JSONRequestParam getRequestBody],failingURL];
                                   MSChar* logError = MSIPhoneConverter ::NSStringToChar(logerror);
                                   LogError(logError);
                                   LogInfo(logError);
                                   delete logError;
                                   logError = NULL;
                                   [outputFormatter release];
                               }
                               else
                               {
                                   NSString *logerror = @"";
                                   
                                   NSDate * now = [NSDate date];
                                   NSDateFormatter *outputFormatter = [[NSDateFormatter alloc] init];
                                   [outputFormatter setDateFormat:@"yyyy-MM-dd hh:mm:ss"];
                                   NSString *newDateString = [outputFormatter stringFromDate:now];
                                   
                                   if(statusCode == 200)
                                   {
                                       logerror = [NSString stringWithFormat:@"Request Time : %@ || Service Type : %@ || http status code %d || Request URL %@", newDateString,[self.JSONRequestParam getServiceName],statusCode,[response URL]];
                                   }
                                   else
                                   {
                                       logerror = [NSString stringWithFormat:@"Request Time : %@ || Service Type : %@ || http status code %d || Request body = %@ || Request URL %@", newDateString,[self.JSONRequestParam getServiceName],statusCode,[self.JSONRequestParam getRequestBody],[response URL]];
                                   }
                                   
                                   [outputFormatter release];
                                  
                                   
                                   MSChar* logError = MSIPhoneConverter ::NSStringToChar(logerror);
                                   LogError(logError);
                                   
                                   if(statusCode != 200)
                                       LogInfo(logError);
                                   
                                   delete logError;
                                   logError = NULL;
                               }
                               
                               if(statusCode == 200)
                               {
                                   //perfom the response operation on main thread
                                   [self performSelectorOnMainThread:@selector(GotData:) withObject:data waitUntilDone:YES];
                               }
                               else
                               {
                                   [self HandleRedirectError:response];
                                   
                                   if(connectionError == nil)
                                   {
                                       // Check For MS_Error
                                       connectionError = [NSError errorWithDomain:@"" code:statusCode userInfo:nil];
                                   }
                                   
                                   [self performSelectorOnMainThread:@selector(FailWithError:) withObject:connectionError waitUntilDone:YES];
                               }
                           }];
    if (queue)
    {
        [queue release];
        queue = nil;
    }
    return;
}

-(void)HandleRedirectError:(NSURLResponse*)aNSURLResponse
{
    NSURL *resolvedURL = [aNSURLResponse URL];
    
    if(resolvedURL &&
       [resolvedURL host] &&
       ([[resolvedURL host] length] > 0))
    {
        MangoAppsServiceProvider* serviceProvider = [MangoAppsServiceProvider sharedInstance];
        if([[resolvedURL host] compare:[serviceProvider GetServerURL]] != NSOrderedSame)
        {
            [serviceProvider SetServerURL:[resolvedURL host]];
            m_gpApp->SetServerURL(MSIPhoneConverter::NSStringToChar([resolvedURL host]));
        }
    }
}


-(void) FailWithError:(NSError*) aError
{
    [self cancleTimeout];
    [self fail:aError];
}

-(void) GotData:(NSData*) aResponse
{
    [self cancleTimeout];
    NSString * responseString = [[NSString alloc] initWithData:aResponse encoding:NSUTF8StringEncoding];
    
    NSLog(@"Response START ------------------------------------------------" );
    NSLog(@"%@",responseString);
    NSLog(@"Response END ------------------------------------------------" );
    
    id responseObject = [self parseResponse:responseString];
    
    if(responseObject)
    {
        [self LogResponseInfo];
    }
    else
    {
        // Check For MS_Error
        NSError* error = nil;
        error = [self GetErrorForResponse:responseString];
        
        if(error == nil)
        {
            error = [NSError errorWithDomain:@"Failed to parse the response" code:-5000 userInfo:nil];
        }
        
        NSString* logerror = [NSString stringWithFormat:@"Service Type : %@ || Error code : %d || Error : %@", [self.JSONRequestParam getServiceName],error.code,error.localizedDescription];
        
        MSChar* logError = MSIPhoneConverter ::NSStringToChar(logerror);
        
        LogError(logError);
        LogInfo(logError);
        delete logError;
        logError = NULL;
        
        [self fail:error];
    }
    
    [responseString release];
    responseString = nil;
    // check whether there is error during parsing
    self.responseData = nil;
    self.connection = nil;
}

- (void) handleException:(NSException *)exception
{
    NSLog(@"Original exception information: %@", exception);

}

- (void) handleError:(NSError *)error 
{
    [self fail:error];
}

#pragma mark - NSURLConnection callbacks

- (void) connection:(NSURLConnection *)connection didReceiveResponse:(NSURLResponse *)response 
{
    //[self cancleTimeout];
    //[self scheduleTimeout];
    
    self.responseData = [NSMutableData data];
}

- (void) connection:(NSURLConnection *)connection didReceiveData:(NSData *)data 
{
    //[self cancleTimeout];
    //[self scheduleTimeout];

    [responseData appendData:data];
}

- (void) connection:(NSURLConnection *)connection didFailWithError:(NSError *)error 
{
    [self cancleTimeout];
    // ignore the passed-in error if we have customized error information
    [self handleError:error];
}

- (BOOL)connection:(NSURLConnection *)connection canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)protectionSpace
{
	return [protectionSpace.authenticationMethod isEqualToString:NSURLAuthenticationMethodServerTrust];
}

- (void)connection:(NSURLConnection *)connection didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge 
{
	[challenge.sender useCredential:[NSURLCredential credentialForTrust:challenge.protectionSpace.serverTrust] forAuthenticationChallenge:challenge];
	[challenge.sender continueWithoutCredentialForAuthenticationChallenge:challenge];
}

- (void) connectionDidFinishLoading:(NSURLConnection *)connection 
{
    [self cancleTimeout];
    NSString * responseString = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
    
    //NSLog(@"Response START ------------------------------------------------" );
    //NSLog(@"%@",responseString);
    //NSLog(@"Response END ------------------------------------------------" );
    
    id responseObject = [self parseResponse:responseString];
    
    if(responseObject)
    {
        [self LogResponseInfo];
    }
    else
    {
        // Check For MS_Error
        NSError* error = nil;
        error = [self GetErrorForResponse:responseString];
        
        if(error == nil)
        {
            error = [NSError errorWithDomain:@"Failed to parse the response" code:kCFErrorHTTPParseFailure userInfo:nil];
        }
        
        [self fail:error];
    }
    
    [responseString release];
    // check whether there is error during parsing
    self.responseData = nil;
    self.connection = nil;
}

#pragma mark - timeout 

- (void) scheduleTimeout 
{
    [self performSelector:@selector(onTimeout) withObject:nil afterDelay:JS_CONNECTION_TIMEOUT];
}

- (void) onTimeout 
{
    [self.connection cancel];
    NSError* error = [NSError errorWithDomain:@"Time out error." code:kCFURLErrorTimedOut userInfo:nil];
    [self fail:error]; 
}

- (void) cancleTimeout 
{
    [NSObject cancelPreviousPerformRequestsWithTarget:self];
}

#pragma mark - destroy related

- (void) dealloc 
{
    self.errorObj = nil;
    [self.JSONRequestParam release];
    self.JSONRequestParam = nil;
    self.responseData = nil;
    if (connection != nil)
    {
        self.connection = nil;
    }   
    [super dealloc];
}

-(void)CancelConnection
{
    [self cancleTimeout];
    if (connection != nil)
    {
        [self.connection cancel];
    }
}

#pragma mark -
-(void) LogRequestInfo
{
    
}

-(void) LogResponseInfo
{
    
}

@end
