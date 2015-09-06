#import <Foundation/Foundation.h>


@interface JSONRequest : NSObject
{
    NSMutableDictionary * elementsAndValues;
}
//@property (nonatomic, retain) NSMutableDictionary * elementsAndValues;

-(void) addElement:(NSString *)tagName withValue:(id)value;

-(void)addServiceURL:(NSString*) aserviceURL;
-(NSString*)getServiceURL;

-(void)addRequestBody:(NSString*) aRequestBody;
-(NSString*)getRequestBody;

-(void)addHTTPHeader:(NSDictionary*) aHTTPHeader;
-(NSDictionary*)getHTTPHeader;

-(void)addHttpRequestType:(NSString*)aHttpRequestType;
-(NSString*)getHttpRequestType;

-(void)addResponseBody:(NSString*) aResponseBody;
-(NSString*)getResponseBody;

-(void)addServiceType:(int)aServiceType;
-(int)getServiceType;

-(void)addServiceName:(NSString*)aServiceType;
-(NSString*)getServiceName;

-(void)addTransactionId:(int)aTransactionId;
-(int)getTransactionId;

@end
