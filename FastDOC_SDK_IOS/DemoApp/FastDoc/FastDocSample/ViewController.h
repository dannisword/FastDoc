#import <UIKit/UIKit.h>
#import <FastDoc/FastDocSDK.h>
#import "CustomDocRecognitionViewController.h"
#import "ResultViewController.h"

@interface ViewController : UIViewController<DocCallback>

@property (strong, nonatomic) IBOutlet UISwitch *switchCustom;

@property (strong, nonatomic) CustomDocRecognitionViewController *customView;

@end

