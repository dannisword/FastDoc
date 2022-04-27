#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CGDocBaseViewController.h"
#import "DocConfig.h"
#import "DocImage.h"
#import "CHGDeviceOrientation.h"
#import "CHGCamera.h"
#import "CHGTakeBoxView.h"
#import "DocCallback.h"


NS_ASSUME_NONNULL_BEGIN

typedef enum ActionStatus:NSUInteger {
    ActionStatusStart,
    ActionStatusInit,
    ActionStatusTake, // 手動拍照已經啟動
    ActionStatusCloseing,
} ActionStatus;

@interface DocRecognitionViewController : CGDocBaseViewController
#pragma mark - UI
// 相機預覽 View
@property (strong, nonatomic) IBOutlet UIView *cameraView;

// Main View
@property (strong, nonatomic) IBOutlet UIView *mainView;
@property (strong, nonatomic) IBOutlet UIView *takeBoxView;
@property (strong, nonatomic) IBOutlet UIView *actionButtonView;

@property (strong, nonatomic) IBOutlet UILabel *titleMsgLabel;
@property (strong, nonatomic) IBOutlet UILabel *bottomMsgLabel;

// 按鈕 View
@property (strong, nonatomic) IBOutlet UIButton *takePictureBtn;
@property (strong, nonatomic) IBOutlet UIButton *cancelBtn;
@property (strong, nonatomic) IBOutlet UIImageView *qrcodeImage1;
@property (strong, nonatomic) IBOutlet UIImageView *qrcodeImage2;



#pragma mark - 參數

// 偵測框
@property (atomic, strong) CHGTakeBoxView* takeBox;
@property (atomic, assign) CGRect cameraViewFrame; // 照相機View的座標尺寸，用來做拍照辨識時的裁切及旋轉基底
@property (atomic, strong) CHGCamera * cgCamera;

// 陀螺儀
@property (atomic, strong) CHGDeviceOrientation * orientationMonitor;
@property (atomic, weak) id<DocCallback> delegate;
@property (atomic, strong) DocConfig * config;

@property (atomic, assign) ActionStatus actionStatus; // 目前執行狀態

@end

NS_ASSUME_NONNULL_END
