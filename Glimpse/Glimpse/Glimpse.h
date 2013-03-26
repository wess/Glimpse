//
//  Glimpse.h
//  Glimpse
//
//  Created by Wess Cope on 3/25/13.
//  Copyright (c) 2013 Wess Cope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^GlimpseCompletedCallback)(NSURL *fileOuputURL);

@interface Glimpse : NSObject
- (void)startRecordingView:(UIView *)view withCallback:(GlimpseCompletedCallback)callback;
- (void)stop;
@end
