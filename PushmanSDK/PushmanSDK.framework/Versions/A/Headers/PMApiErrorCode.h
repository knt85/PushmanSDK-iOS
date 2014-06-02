//
//

#import <Foundation/Foundation.h>

@interface PMApiErrorCode : NSObject

extern NSString *const PM_ERROR_DOMAIN;

extern int const PM_NOT_PROCCESS_ERROR;
extern int const PM_ENCODING_ERROR;
extern int const PM_PROTOCOL_ERROR;
extern int const PM_IO_ERROR;
extern int const PM_INVALID_JSON_RESPONSE;
extern int const PM_INVALID_SIGNATURE_RESPONSE;
@end