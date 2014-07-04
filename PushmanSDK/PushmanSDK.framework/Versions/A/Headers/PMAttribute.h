//
//  PMAttribute.h
//  Pushman
//
//

#import <Foundation/Foundation.h>
#import "PMApiBase.h"

@class PMApiRequestListener;

@interface PMAttribute : PMApiBase

- (void)create;

- (void)updateAttributes:(NSDictionary *)attributes;

- (void)createDevices:(PMApiRequestListener *)listener;

- (void)updateDeviceAttributes:(NSDictionary *)attributes;

- (void)createDevices:(NSString *)deviceToken callback:(PMApiRequestListener *)listener;

- (void)updateDevices:(NSString *)deviceToken callback:(PMApiRequestListener *)listener;

- (void)register:(NSString *)deviceToken withOption:(NSDictionary*)option callback:(PMApiRequestListener *)listener;

- (NSString *)userId;
- (NSString *)deviceId;
- (void) removeLocalIds;

@end
