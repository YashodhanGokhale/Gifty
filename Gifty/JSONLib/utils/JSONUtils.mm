#import "JSONUtils.h"

@implementation JSONUtils

#pragma mark -
+ (NSMutableURLRequest *) buildRequestWithRequestObject:(JSONRequest*) aRequest
{
    NSURL * url = [NSURL URLWithString:[[aRequest getServiceURL] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]];
    NSMutableURLRequest * theRequest = [NSMutableURLRequest requestWithURL:url];
    [theRequest setCachePolicy:NSURLRequestReloadIgnoringLocalCacheData];
    
    // add head properties
    if ([aRequest getHTTPHeader]) 
    {
        for (NSString * headField in [aRequest getHTTPHeader].keyEnumerator) 
        {
            [theRequest addValue:[[aRequest getHTTPHeader] objectForKey:headField] forHTTPHeaderField:headField];
        }
    }
    
    [theRequest setHTTPMethod:[aRequest getHttpRequestType]];
    if ([aRequest getRequestBody])
    {
        [theRequest setHTTPBody: [[aRequest getRequestBody] dataUsingEncoding:NSUTF8StringEncoding]];
    }
    return theRequest;
}
#pragma mark -
@end
