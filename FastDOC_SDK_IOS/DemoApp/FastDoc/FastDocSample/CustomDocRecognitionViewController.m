#import "CustomDocRecognitionViewController.h"

@interface CustomDocRecognitionViewController ()

@end

@implementation CustomDocRecognitionViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.titleLabel setText:@"客制標題"];
    [self.bottomLabel setText:@"客制說明"];
}

- (IBAction)switchCustom:(id)sender {
}
@end
