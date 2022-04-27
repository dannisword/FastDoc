//
//  CHGDeviceOrientation.h
//  CGImageRecognitionSDK
//
//  Created by Leo on 2019/2/11.
//  Copyright © 2019年 leotseng. All rights reserved.
//

#import <CoreMotion/CoreMotion.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import "DocEnum.h"

NS_ASSUME_NONNULL_BEGIN


@protocol CHGDeviceOrientationDelegate <NSObject>

- (void)directionChange:(CHGDirection)direction;

@end
@interface CHGDeviceOrientation : NSObject

@property (nonatomic, strong) CMMotionManager *motionManager;
@property (nonatomic, assign) CHGDirection direction;
@property (nonatomic,strong) id<CHGDeviceOrientationDelegate> delegate;
@property (nonatomic, assign) double preX;
@property (nonatomic, assign) double preY;
@property (nonatomic, assign) double nowX;
@property (nonatomic, assign) double nowY;
@property (nonatomic, strong) NSMutableArray * arrayX;
@property (nonatomic, strong) NSMutableArray * arrayY;
@property (nonatomic, assign) int index;

- (instancetype)initWithDelegate:(id<CHGDeviceOrientationDelegate>)delegate;
/**
 開啟監聽
 */
- (void)startMonitor;

/**
  裝置是否移動中
 */
- (BOOL)isDeviceMoving;

/**
 結束監聽
 */
- (void)stop;

@end

NS_ASSUME_NONNULL_END
