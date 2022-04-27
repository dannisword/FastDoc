//
//  CHGPhotoRange.h
//  CGImageRecognitionSDK
//
//  Created by Leo on 2018/12/18.
//  Copyright © 2018年 leotseng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CHGRect.h"
#import "DocEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface CHGRect : NSObject

- (instancetype)initWithWidth:(CGFloat) width height:(CGFloat) height x:(CGFloat)x y:(CGFloat)y;
- (instancetype)initWithLeftUpX:(CGFloat)leftUpX leftUpY:(CGFloat)leftUpY rightUpX:(CGFloat)rightUpX rightUpY:(CGFloat)rightUpY rightDownX:(CGFloat)rightDownX rightDownY:(CGFloat)rightDownY leftDownX:(CGFloat)leftDownX leftDownY:(CGFloat)leftDownY;
- (instancetype)initWithArray:(NSArray*)array;
- (instancetype)initWithRect:(CGRect)rect;
- (instancetype)initWithCHGRect:(CHGRect*)rect;

- (CHGRect *) resizeWithScaleX:(CGFloat) scaleX scaleY:(CGFloat)scaleY;
- (CHGRect *) rotate:(CHGDirection)rotate mainFrame:(CGRect)mainframe;

@property (atomic, assign) CGFloat x;
@property (atomic, assign) CGFloat y;
@property (atomic, assign) CGFloat width;
@property (atomic, assign) CGFloat height;

@property (atomic, assign) CGFloat leftUpX;
@property (atomic, assign) CGFloat leftUpY;
@property (atomic, assign) CGFloat rightUpX;
@property (atomic, assign) CGFloat rightUpY;
@property (atomic, assign) CGFloat rightDownX;
@property (atomic, assign) CGFloat rightDownY;
@property (atomic, assign) CGFloat leftDownX;
@property (atomic, assign) CGFloat leftDownY;

@end

NS_ASSUME_NONNULL_END
