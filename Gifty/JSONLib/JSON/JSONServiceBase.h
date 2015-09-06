#import <Foundation/Foundation.h>
#import "JSON.h"
#import "JSONRequest.h"


@interface JSONServiceBase : NSObject
{
    
}

@property (nonatomic, retain) NSObject * errorObj;              // for child class to set error information
@property (nonatomic, retain) JSONRequest * JSONRequestParam;
@property (nonatomic, assign) bool wasMovedToBackground;



- (void) request;

@end

@interface JSONServiceBase (Protected) 
-(void) LogRequestInfo;
-(void) LogResponseInfo;

- (void) fail:(NSError *)aError;
- (void) failWithErrorInfo:(id)errorInfo;

- (NSString*) GetMessage;;
- (NSMutableURLRequest *) buildRequest:(NSString *)aMessage;
- (id) parseResponse:(NSString *)responseString;
- (NSString *) parseError;
- (void) sendNotificationOnSuccess:(id)value;
- (void) sendNotificationOnFailure:(id)errorInfo;
-(NSError*) GetErrorForRequest;
-(void)CancelConnection;
-(NSDictionary*)GetErrorDictionry;

@end

