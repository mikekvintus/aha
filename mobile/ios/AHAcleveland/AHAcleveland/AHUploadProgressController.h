#import <UIKit/UIKit.h>
#import "UploadManager.h"

#define UPLOADPROGRESSCONTROLLER_RETRY_SELECTED @"UPLOADPROGRESSCONTROLLER_RETRY_SELECTED"

#define UPLOADPROGRESSCONTROLLER_RETRY_DECLINED @"UPLOADPROGRESSCONTROLLER_RETRY_DECLINED"

#define UPLOADPROGRESSCONTROLLER_SHOULD_DISMISS @"UPLOADPROGRESSCONTROLLER_SHOULD_DISMISS"

typedef enum {
    Uploading,
    Error,
    Success
} UploadState;

@interface AHUploadProgressController : UIViewController
{
    NSMutableArray* animationImages;
    NSTimer* dismissTimer;
}

@property (strong, nonatomic) IBOutlet UIButton *buttonRetry;
@property (strong, nonatomic) IBOutlet UIButton *buttonDeclineRetry;

-(void)setForUploading;
-(void)setForError;
-(void)setForSuccess;

- (IBAction)handleRetry:(id)sender;
- (IBAction)handleRetryDecline:(id)sender;

@property (strong, nonatomic) IBOutlet UIImageView *imageProgressAnimation;
@property (strong, nonatomic) IBOutlet UIImageView *imageSuccess;
@property (strong, nonatomic) IBOutlet UIImageView *imageErrorMessage;
@end
