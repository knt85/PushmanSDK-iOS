//
//

#import <Foundation/Foundation.h>

@class PMApiRequest;

@interface PMApiRequestListener : NSObject

@property (copy, nonatomic) NSString *deviceToken;

typedef void (^RequestSuccessHandler)(long status, NSDictionary *headers, NSDictionary *json);

typedef void (^RequestErrorHandler)(long errorCode, NSString *errorMessage);

- (id)initWithSuccess:(RequestSuccessHandler)successHandler error:(RequestErrorHandler)errorHandler;

- (void)setSuccessHandler:(RequestSuccessHandler)handler;

- (void)setErrorHandler:(RequestErrorHandler)handler;

- (void)handleSuccess:(long)status headers:(NSDictionary *)headers body:(NSData *)body;

- (void)handleSuccess:(long)status headers:(NSDictionary *)headers response:(NSDictionary *)param;

- (void)handleError:(long)errorCode message:(NSString *)errorMessage;

@end
