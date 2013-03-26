//
//  GlimpseAssetWriter.h
//  Glimpse
//
//  Created by Wess Cope on 3/25/13.
//  Copyright (c) 2013 Wess Cope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

/**
 `GlimpseAssetWriter` is a class used to handle writing captured screen shots to video.
 **/

@class GlimpseAssetWriter;

@interface GlimpseAssetWriter : NSObject
///----------------------------------------------------------------------------------------------------------
/// @name Wrapper to AVAssetWriter to simplifiy converting a collection of images to a video.
///----------------------------------------------------------------------------------------------------------

/**
 Defines the size of the recording area, defaults to UIScreen's bounds.
 **/
@property (readwrite, nonatomic)    CGSize      size;

/**
 Frames per second for playback.
 **/
@property (assign, nonatomic)       NSInteger   framesPerSecond;

/**
 Path of the file that the video is being written to.
 **/
@property (readonly, nonatomic)     NSURL       *fileOutputURL;

/**
 When recording started.
 **/
@property (strong, nonatomic)       NSDate      *startDate;

/**
 When recording stopped.
 **/
@property (strong, nonatomic)       NSDate      *endDate;

/**
 Creates a new video frame based of the image that is passed, added to the frame buffering.
 
 @param image Image to be written to video.
 **/
- (void)writeFrameWithImage:(UIImage *)image;

/**
 Writes images in frame buffer to video in sequence, then fires callback when complete.
 
 @param callback Block called when all image frames have been written to video.
 **/
- (void)writeVideoFromImageFrames:(void(^)(NSURL *outputPath))callback;

@end
