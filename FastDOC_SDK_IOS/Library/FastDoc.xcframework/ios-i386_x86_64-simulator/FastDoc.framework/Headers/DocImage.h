#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DocImage : NSObject

@property (nonatomic, assign) int type;
@property (nonatomic, assign) int mode;
@property (nonatomic, assign) int orientation;
@property (nonatomic, strong) UIImage * image;

@end

NS_ASSUME_NONNULL_END
