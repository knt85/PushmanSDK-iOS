//
//  Pushman.h
//  Pushman
//
//  PushmanSDK VERSION : 0.2.0
//  Last Update: 2014/06/06
//

#import <Foundation/Foundation.h>
#import "PMPush.h"
#import "PMAttribute.h"

@class HLKNetworkResponse;
@class PMApiRequestListener;

@interface Pushman : NSObject

+ (void)date:(PMApiRequestListener *)listener;

+ (void)log:(NSString *)log;

+ (void)errorLog:(NSString *)log;

+ (void)debugMode:(BOOL)mode;

+ (Pushman *)sharedInstance;

+ (void)initialize:(NSString *)key secret:(NSString *)secret;

+ (void)dumpRequest:(NSURLRequest *)request;

+ (void)dumpResponse:(HLKNetworkResponse*)response;

- (PMPush *)push;

- (PMAttribute *)user;

+ (void)didEnterBackground;

+ (void)willEnterForeground;

@end
