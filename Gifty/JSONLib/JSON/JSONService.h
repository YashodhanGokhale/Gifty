
#import <Foundation/Foundation.h>
#import "JSONServiceBase.h"

@interface JSONService : JSONServiceBase
{
    NSMutableDictionary * headProps;
}

//@property (nonatomic, retain) NSMutableDictionary * headProps;
@property (nonatomic, retain) NSString * serviceUrl;

@end

@interface JSONService (Protected) 


- (void) addHeadProp:(NSString *)key withValue:(id)value;
- (void) buildServiceUrlWithName:(NSString *)serviceName;

- (id) parseResponseWithJSON:(NSString *)responseString;
- (void) prepareUrlAndHeadProps;
-(NSString*) GetDomainURL;
-(NSString*) GetHostName;
-(NSString*) GetCookie;

@end
