//
//

#import <Foundation/Foundation.h>
#import "PMApiTypeDefinition.h"

@class PMApiRequestListener;
@class PMApiSender;
@class PMApiRequestFactory;

@interface PMApiBase : NSObject {
@protected
    PMApiSender *_sender;
    PMApiRequestFactory *_factory;
}

- (id)initWithApiKey:(NSString *)apiKey secret:(NSString *)secret;

- (void)send:(HBApiTypeDefinition)definition params:(NSDictionary *)params listener:(PMApiRequestListener *)listener;
@end
