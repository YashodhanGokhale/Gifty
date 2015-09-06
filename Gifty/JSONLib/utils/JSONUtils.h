#import <Foundation/Foundation.h>
#import "JSONRequest.h"

@interface JSONUtils : NSObject

+ (NSMutableURLRequest *) buildRequestWithRequestObject:(JSONRequest*) aRequest;
@end
