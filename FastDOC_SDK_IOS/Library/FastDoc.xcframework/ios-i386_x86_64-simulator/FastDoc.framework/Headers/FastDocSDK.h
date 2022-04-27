#import <Foundation/Foundation.h>
#import "DocConfig.h"
#import "DocCallback.h"
#import "DocRecognitionViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface FastDocSDK : NSObject

@property (atomic, strong) DocConfig * docConfig;

+ (int)initial;
+ (int)readConfig:(DocConfig *) config;

/**
 * nowView: App目前UIViewController
 * cameraView: 客制相機頁面，如不需客制則傳nil即可
 * callback: 回傳拍照結果或取消
 */
+ (int)start:(UIViewController * _Nonnull)nowView cameraView:(DocRecognitionViewController * _Nullable)cameraView callback:(id<DocCallback> _Nonnull)callback;

@end

NS_ASSUME_NONNULL_END
