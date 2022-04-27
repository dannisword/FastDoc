//
//  ResultViewController.h
//  FastDocSample
//
//  Created by Tseng Yi Kai on 2022/3/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <FastDoc/FastDocSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResultViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@property (strong, nonatomic) DocImage * docImage;

- (IBAction)clickOK:(id)sender;
@end

NS_ASSUME_NONNULL_END
