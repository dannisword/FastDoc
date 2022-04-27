
#import "DocImage.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DocCallback
@required
- (void) takePhoto:(DocImage *)image;
- (void) cancel;
@end

NS_ASSUME_NONNULL_END
