#import <UIKit/UIKit.h>
#import <FastDoc/DocRecognitionViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface CustomDocRecognitionViewController : DocRecognitionViewController

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *bottomLabel;


@end

NS_ASSUME_NONNULL_END
