//
//  Pushman.h
//  Pushman
//
//  PushmanSDK VERSION : 0.1.5
//  Last Update: 2014/06/06
//

#import <Foundation/Foundation.h>
#import "PMApiRequestListener.h"
#import "PMPush.h"
#import "PMAttribute.h"

@interface Pushman : NSObject

@property(nonatomic, readonly) NSString *apiKey;
@property(nonatomic, readonly) NSString *secret;

+ (void)date:(PMApiRequestListener *)listener;

+ (void)log:(NSString *)log;

+ (void)errorLog:(NSString *)log;

+ (void)debugMode:(BOOL)mode;

+ (Pushman *)sharedInstance;

+ (void)initialize:(NSString *)key secret:(NSString *)secret;

+(void)dumpRequest:(NSURLRequest *)request;

+(void)dumpResponse:(NSHTTPURLResponse*)response body:(NSData *)body;

- (PMPush *)push;

- (PMAttribute *)user;

+ (BOOL) isConnectNetwork;

@end
