#import "JSONRequest.h"

#define SERVICE_URL @"serviceURL"
#define REQUEST_BODY @"requestBody"
#define HTTP_HEADER @"httpHeader"
#define HTTP_REQUEST_TYPE @"httpRequestType"
#define HTTP_RESPONSE_BODY @"responseBody"
#define SERVICE_TYPE @"jsonServiceType"
#define SERVICE_NAME @"jsonsServiceName"
#define TRANSACTION_ID @"transactionId"

@implementation JSONRequest

//@synthesize elementsAndValues;

-(void)dealloc
{
    [elementsAndValues release];
    elementsAndValues = NULL;
    
    [super dealloc];
}

#pragma mark
-(void) addElement:(NSString *)tagName withValue:(id)value 
{
    if (!elementsAndValues) 
    {
        elementsAndValues = [[NSMutableDictionary alloc] init];
    }
    [elementsAndValues setObject:value forKey:tagName];
}

#pragma mark
-(void)addServiceURL:(NSString*) aserviceURL
{
    [self addElement:SERVICE_URL withValue:aserviceURL];
}

-(NSString*)getServiceURL
{
    return [elementsAndValues valueForKey:SERVICE_URL];
}

#pragma mark
-(void)addRequestBody:(NSString*) aRequestBody
{
    [self addElement:REQUEST_BODY withValue:aRequestBody];
}

-(NSString*)getRequestBody
{
    return [elementsAndValues valueForKey:REQUEST_BODY];
}

#pragma mark
-(void)addHTTPHeader:(NSDictionary*) aHTTPHeader
{
    [self addElement:HTTP_HEADER withValue:aHTTPHeader];
}

-(NSDictionary*)getHTTPHeader
{
    return [elementsAndValues valueForKey:HTTP_HEADER];
}

#pragma mark
-(void)addHttpRequestType:(NSString*)aHttpRequestType
{
     [self addElement:HTTP_REQUEST_TYPE withValue:aHttpRequestType];
}

-(NSString*)getHttpRequestType
{
    return [elementsAndValues valueForKey:HTTP_REQUEST_TYPE];
}

#pragma mark
-(void)addResponseBody:(NSString*) aResponseBody
{
    [self addElement:HTTP_RESPONSE_BODY withValue:aResponseBody];
}

-(NSString*)getResponseBody
{
    return [elementsAndValues valueForKey:HTTP_RESPONSE_BODY];
}

#pragma mark
-(void)addServiceType:(int)aServiceType
{
     [self addElement:SERVICE_TYPE withValue:[NSNumber numberWithInt:aServiceType]];
}

#pragma mark
-(int)getServiceType
{   
    return [[elementsAndValues valueForKey:SERVICE_TYPE] intValue];
}

#pragma mark
-(void)addServiceName:(NSString*)aServiceType
{
    [self addElement:SERVICE_NAME withValue:aServiceType];
}

#pragma mark
-(NSString*)getServiceName
{
    return [elementsAndValues valueForKey:SERVICE_NAME];
}

#pragma mark
-(void)addTransactionId:(int)aTransactionId
{
    [self addElement:TRANSACTION_ID withValue:[NSNumber numberWithInt:aTransactionId]];
}

#pragma mark
-(int)getTransactionId
{
    return [[elementsAndValues valueForKey:TRANSACTION_ID] intValue];
}

@end