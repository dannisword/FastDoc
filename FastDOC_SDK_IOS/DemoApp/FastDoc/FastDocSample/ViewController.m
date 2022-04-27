#import "ViewController.h"
//#import "CustomDocRecognitionViewController.h"

@interface ViewController ()

@end

@implementation ViewController

static DocConfig * config;

- (void)viewDidLoad {
    [super viewDidLoad];
    config = [[DocConfig alloc] init];
    config.mode = 1;
    config.borderColor = @"#2fdbf2";
    config.borderWidth = 8;
    config.blackScreenTransparency = 60;
    
    // 用於客制
    self.customView = [[CustomDocRecognitionViewController alloc] initWithNibName:@"CustomDocRecognitionView" bundle:[NSBundle mainBundle]];
}


- (IBAction)clickUniformInvoiceFormat25:(id)sender {
    config.type = DocTypeUniformInvoiceFormat25;
    config.orientation = DocOrientationPortrait;
    [self start];
}

- (IBAction)clickUniformInvoiceFormat22:(id)sender {
    config.type = DocTypeUniformInvoiceFormat22;
    config.orientation = DocOrientationPortrait;
    [self start];
}

- (IBAction)clickTaiwanRailwayTicketS:(id)sender {
    config.type = DocTypeTaiwanRailwayTicketS;
    config.orientation = DocOrientationPortrait;
    [self start];
}

- (IBAction)clickTaiwanRailwayTicketH:(id)sender {
    config.type = DocTypeTaiwanRailwayTicketH;
    config.orientation = DocOrientationLandscape;
    [self start];
}

- (IBAction)clickTHSRTicket:(id)sender {
    config.type = DocTypeTHSRTicket;
    config.orientation = DocOrientationPortrait;
    [self start];
}


- (void)start{
    int errorCode = [FastDocSDK readConfig:config];
    if(errorCode != 0){
        NSLog(@"ErrorCode = %d", errorCode);
        return;
    }
    
    if(self.switchCustom.on){ // 啓用客制
        errorCode = [FastDocSDK start:self cameraView:self.customView callback:self];
    }else{
        errorCode = [FastDocSDK start:self cameraView:nil callback:self];
    }
    if(errorCode != 0){
        NSLog(@"ErrorCode = %d", errorCode);
        return;
    }
}

- (void)takePhoto:(DocImage *)image{
    dispatch_async(dispatch_get_main_queue(), ^{
        ResultViewController * resultViewController = [[ResultViewController alloc] initWithNibName:@"ResultView" bundle:[NSBundle mainBundle]];
        resultViewController.docImage = image;
        [self presentViewController:resultViewController animated:YES completion:nil];
    });
}

- (void)cancel{
    NSLog(@"使用者取消");
}
@end
