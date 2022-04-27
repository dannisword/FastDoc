//
//  TakeBoxView.h
//  CGImageRecognitionSDK
//
//  Created by Leo on 2018/10/29.
//  Copyright © 2018年 leotseng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CHGRect.h"
#import "DocEnum.h"


NS_ASSUME_NONNULL_BEGIN

@interface CHGTakeBoxView : UIView

@property (nonatomic, strong) CHGRect * rect;
@property (nonatomic, strong) CHGRect * subRect;
@property (nonatomic, strong) UIColor* frameColor;
@property (nonatomic, strong) UIColor* subFrameColor;
@property (nonatomic, strong) UIColor* subInsideColor;
@property (nonatomic, assign) int lineWidth;
@property (nonatomic, assign) float markAlpha;

- (id)initWithFrame:(CGRect)frame takeBoxRect:(CHGRect *)takeBoxRect subBoxRect:(nullable CHGRect *)subBoxRect lineWidth:(int)lineWidth colorFromHexString:(NSString *)colorFromHexString markAlpha:(int) markAlpha;

- (id)initWithFrame:(CGRect)frame takeBoxRect:(CHGRect *)takeBoxRect subBoxRect:(nullable CHGRect *)subBoxRect lineWidth:(int)lineWidth colorFromHexString:(NSString *)colorFromHexString  subColorFromHexString:(NSString *)subColorFromHexString  subInsideColorFromHexString:(NSString *)subInsideColorFromHexString markAlpha:(int) markAlpha;
- (CHGRect *)getFixedRectWithImage:(UIImage *)image mainRect:(CGRect)mainRect orientation:(DocOrientation)orientation rotate:(CHGDirection)rotate;
@end

NS_ASSUME_NONNULL_END
