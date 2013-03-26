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

@class GlimpseAssetWriter;

@interface GlimpseAssetWriter : NSObject
@property (readwrite, nonatomic)    CGSize      size;
@property (assign, nonatomic)       NSInteger   framesPerSecond;
@property (readonly, nonatomic)     NSURL       *fileOutputURL;
@property (strong, nonatomic)       NSDate      *startDate;
@property (strong, nonatomic)       NSDate      *endDate;

- (void)writeFrameWithImage:(UIImage *)image;
- (void)writeVideoFromImageFrames:(void(^)(NSURL *outputPath))callback;

@end
