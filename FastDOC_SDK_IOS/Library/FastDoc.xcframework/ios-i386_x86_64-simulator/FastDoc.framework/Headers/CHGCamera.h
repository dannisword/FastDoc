
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CHGCamera : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate>{
}

@property (atomic, strong) AVCaptureSession* session;
@property (atomic, strong) AVCaptureVideoPreviewLayer* previewLayer;
@property (atomic, strong) AVCaptureDevice* videoDevice;
@property (atomic, strong) AVCaptureDeviceInput* videoDeviceInput;
@property (atomic, strong) AVCaptureDevice* audioDevice;
@property (atomic, strong) AVCaptureDeviceInput* audioDeviceInput;
@property (atomic, strong) AVCaptureMovieFileOutput* movieFileOutput;
@property (atomic, strong) AVCaptureStillImageOutput* myStillImageOutput;
@property (atomic, strong) dispatch_queue_t videoDataOutputQueue;


- (BOOL) isFocus;

- (instancetype)initWithSampleBufferDelegate:(nullable id<AVCaptureVideoDataOutputSampleBufferDelegate>)sampleBufferDelegate frame:(CGRect) frame sessionType:(AVCaptureSessionPreset) sessionType;

+ (AVCaptureDevice*)captureDeviceForPosition:(AVCaptureDevicePosition)position;
+ (UIImage*)imageFromSampleBuffer:(CMSampleBufferRef)sampleBuffer;
- (void)takeCamera:(void (^)(UIImage *))callback;

@end

NS_ASSUME_NONNULL_END
