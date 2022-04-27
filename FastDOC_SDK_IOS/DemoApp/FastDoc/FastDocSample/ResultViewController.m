//
//  ResultViewController.m
//  FastDocSample
//
//  Created by Tseng Yi Kai on 2022/3/25.
//

#import "ResultViewController.h"

@implementation ResultViewController

- (void)viewDidLoad {
    [self.imageView setImage:self.docImage.image];
}

- (IBAction)clickOK:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
