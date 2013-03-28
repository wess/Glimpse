# Glimpse
Glimpse is a simple library that allows you to create videos from UIViews.  It records animations and actions as they happen by taking screen shots of a UIView in a series and then creating a quicktime video and saving it to your app’s document folder.

## Setup
To setup Glimpse, add the `Glimpse` project file to your project or workspace. Import <Glimpse/Glimpse.h> where you want to use it.

## Example Usage
Glimpse only uses 2 methods that start and stop recording your view.

```objectivec
#import <Glimpse/Glimpse.h>

@implementation myViewController
- (void)viewDidAppear
{
	    [super viewDidAppear:animated];
    
    	// Create a new Glimpse object.
	    Glimpse *glimpse = [[Glimpse alloc] init];
	    
	    // Start recording and tell Glimpse what to do when you are finished
    	[glimpse startRecordingView:self.view onCompletion:^(NSURL *fileOuputURL) {
        	NSLog(@"DONE WITH OUTPUT: %@", fileOuputURL.absoluteString);
	    }];

		// Create a subview for this example
    	UIView *view = [[UIView alloc] initWithFrame:CGRectInset(self.view.bounds, 40.0f 40.0f)];
	    view.backgroundColor = [UIColor greenColor];
	    view.alpha = 0.0f;
    	
    	[self.view addSubview:view];
    
    	// We are going to record the view fading in.
	    [UIView animateWithDuration:5.0 animations:^{
    	    view.alpha = 1.0f;
	    } completion:^(BOOL finished) {
	    	// Since our animation is complete, lets tell Glimpse to stop recording.
    	    [glimpse stop];
	    }];
 }
@end
```
## Developer info
* [Github](http://www.github.com/wess)
* [@WessCope](http://www.twitter.com/wesscope)

## License
Read LICENSE file for more info.
