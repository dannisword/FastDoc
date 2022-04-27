//
//  License.h
//  CGImageRecognitionSDK
//
//  Created by Leo on 2019/1/9.
//  Copyright © 2019年 leotseng. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DocEnum.h"
#import "DocConfig.h"
#import "CHGErrorCode.h"


NS_ASSUME_NONNULL_BEGIN

@interface License : NSObject

/**
 * 載入License並檢查狀態，回傳檢查結果及資料
 */

+ (int)checkLicense:(int) type;

@end

NS_ASSUME_NONNULL_END
