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

- (void)updateAttributes:(NSDictionary *)attributes callback:(PMApiRequestListener *)listener;

- (void)createDevices:(PMApiRequestListener *)listener;

- (void)updateDevices:(PMApiRequestListener *)listener;

- (void)createDevices:(NSString *)deviceToken callback:(PMApiRequestListener *)listener;

- (void)updateDevices:(NSString *)deviceToken callback:(PMApiRequestListener *)listener;

- (void)register:(NSString *)deviceToken withOption:(NSDictionary*)option callback:(PMApiRequestListener *)listener;

- (NSString *)userId;

- (void) removeLocalIds;

@end
