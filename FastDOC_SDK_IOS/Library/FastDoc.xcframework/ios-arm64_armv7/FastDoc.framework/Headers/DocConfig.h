
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface DocConfig : NSObject

@property (nonatomic, assign) int type;
@property (nonatomic, assign) int mode;
@property (nonatomic, assign) int orientation;
@property (nonatomic, assign) int borderWidth;
@property (nonatomic, strong) NSString * borderColor;
@property (nonatomic, assign) int blackScreenTransparency;


@end

NS_ASSUME_NONNULL_END
