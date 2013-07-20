#import "AHUploadProgressController.h"

@interface AHUploadProgressController ()

@end

@implementation AHUploadProgressController

- (id)init {
    self = [super initWithNibName:@"AHUploadProgressView" bundle:nil];
    if (self) {
        
        
    }
    return self;
}

- (NSUInteger)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

-(void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];

}

-(void)setForError
{
    _buttonRetry.hidden = false;
    _buttonDeclineRetry.hidden = false;
    
}

-(void)setForSuccess
{
    
}

-(void)updateDisplay
{
    _buttonRetry.hidden = true;
    _buttonDeclineRetry.hidden = true;
}

- (IBAction)handleRetry:(id)sender {
    
    [[NSNotificationCenter defaultCenter] postNotificationName:UPLOADPROGRESSCONTROLLER_RETRY_SELECTED object:nil userInfo:nil];
}

- (IBAction)handleRetryDecline:(id)sender {
    
    [[NSNotificationCenter defaultCenter] postNotificationName:UPLOADPROGRESSCONTROLLER_RETRY_DECLINED object:nil userInfo:nil];
}

@end
