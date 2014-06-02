//
//

#import <UIKit/UIKit.h>
#import "PMApiBase.h"

@interface PMPush : PMApiBase

@property(nonatomic, readonly) NSDictionary *lastPushParam;

- (void)updatePush:(NSData *)deviceToken;

- (void)registerDeviceToken:(NSData *)deviceToken withUserOption:(NSDictionary*)option;

- (void)registerWithUserOption:(NSDictionary*)option;

- (void)openPush:(NSString *)pushId;

- (void)receivePush:(NSDictionary *)userInfo application:(UIApplication *)application;

- (void)registerPush:(UIApplication *)application withLaunchOption:(NSDictionary *)launchOptions;

@end
