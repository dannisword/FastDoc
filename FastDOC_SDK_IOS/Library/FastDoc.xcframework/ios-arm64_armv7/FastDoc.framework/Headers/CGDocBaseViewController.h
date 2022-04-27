
#import <UIKit/UIKit.h>
#import "DocEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface CGDocBaseViewController : UIViewController


@property (atomic, assign) CGRect mainFrame;
@property (atomic, assign) CHGDirection transformUIOrientation; // UI的方向，根據此方向旋轉UI
@property (atomic, assign) DocOrientation viewOrientation; // 直向橫向

- (CGRect)getMainFrame;

/** 旋轉UIView，並且回傳正確的寬高 **/
- (CGRect)transformUIView:(UIView *)view orientation:(CHGDirection)orientation;

/** 轉正圖片 **/
- (UIImage *)fixOrientation:(UIImage *)image ;

/** 根據螢幕比例裁切照片 **/
- (UIImage *)fixedPhoto:(UIImage *)image photoFrame:(CGRect)photoFrame orientation:(CHGDirection)orientation;
- (UIImage *)fixedPhotoForDoc:(UIImage *)image frame:(CGRect)frame;
- (UIImage *)zoom:(UIImage *)image size:(float) size;

/** 根據Config裡的資料以及螢幕比例取得TakeBox的座標及長寬 **/
- (CGRect)getBoxFrame:(CGRect)frame detectType:(DocType) detectType orientation:(CHGDirection)orientation;

/** 根據Config裡的資料以及螢幕比例取得SubTakeBox的座標及長寬 **/
-(CGRect) getSubBoxFrame:(CGRect)takeBoxFrame detectType:(DocType) detectType orientation:(CHGDirection)orientation;

- (int)getStatusBarHeight ;

- (CGSize) getStringSize:(NSString *)str font:(UIFont *)font;

/** Alert **/
- (void)alertMsg:(NSString*)msg;

@end

NS_ASSUME_NONNULL_END
