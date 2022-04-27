
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DocEnum.h"
#import "CHGRect.h"
#import "DocConfig.h"

NS_ASSUME_NONNULL_BEGIN

/** 偵測結果 **/
typedef enum CHGResultCode:NSInteger{
    CHGResultCodeNone = 0,
    CHGResultCodeSuccess = 1,
    CHGResultCodeNoSearchLine = 2,
    CHGResultCodeNotMatchDetectbox = 3,
    CHGResultCodeIsBlurry = 4,
    CHGResultCodeFailureToIdentify = 5,
    CHGResultCodeIsNotVerify = 6,
    CHGResultCodeIsNotFullScreen = 7,
    CHGResultCodeIsReflectiveLight = 8,
    CHGResultCodeIsApproachToThreshold = 9,
    CHGResultCodeIsShadow = 10
}CHGResultCode;

@interface CHGImage:NSObject

@property (atomic, assign) int index;
@property (atomic, assign) DocType detectType; // 證件類型
@property (atomic, assign) DocOrientation orientation; // View方向
@property (atomic, assign) DocMode mode; // 正反面
@property (atomic, strong, nullable) UIImage * image; // 裁切並梯形校正後的照片
@property (atomic, strong, nullable) CHGRect * rect; // 邊框偵測結果
@property (atomic, strong, nullable) NSString * result; // 辨識結果
@property (atomic, assign) CHGResultCode resultCode; // 邊框偵測狀態

- (instancetype)initWithConfig:(DocConfig *)config;

-(UIImage*) getWatermarkImage:(NSString *)text color:(NSString*)color angle:(int)angle alpha:(int)alpha;
-(UIImage*) getWatermarkImage:(UIImage *)watermarkImage alpha:(int)alpha;

- (CHGImage *) copy;

@end

NS_ASSUME_NONNULL_END
