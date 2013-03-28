//
//  Glimpse.h
//  Glimpse
//
//  Created by Wess Cope on 3/25/13.
//  Copyright (c) 2013 Wess Cope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 `Glimpse` is a class that allows recording of UIViews and their interactions and animations.
 */

/**
 Callback block that is called when a recording session is complete.
 **/
typedef void(^GlimpseCompletedCallback)(NSURL *fileOuputURL);

@interface Glimpse : NSObject
///--------------------------------------------------------------------------------------------------------
/// @name Main class for creating new and controlling recordings.
///--------------------------------------------------------------------------------------------------------

/**
 Starts recording a view and defines completion callback.
 
 @param view UIView to record.
 
 @param block Block that is called when recording has been stopped.
 
 **/
- (void)startRecordingView:(UIView *)view onCompletion:(GlimpseCompletedCallback)block;

/**
 Just an alias.
 **/
- (void)startRecordingView:(UIView *)view withCallback:(GlimpseCompletedCallback)callback;

/**
 Stops recording a previously defined UIView.
 **/
- (void)stop;
@end
