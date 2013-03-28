//
//  GEExampleViewController.m
//  GlimpseExample
//
//  Created by Wess Cope on 3/25/13.
//  Copyright (c) 2013 Wess Cope. All rights reserved.
//

#import "GEExampleViewController.h"
#import <Glimpse/Glimpse.h>
#import <QuartzCore/QuartzCore.h>

@interface GEExampleViewController ()
@property (strong, nonatomic) Glimpse *glimpse;
@end

@implementation GEExampleViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self)
    {
        self.glimpse = [[Glimpse alloc] init];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor redColor];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    [self.glimpse startRecordingView:self.view withCompletion:^(NSURL *fileOuputURL) {
        NSLog(@"DONE WITH OUTPUT: %@", fileOuputURL.absoluteString);
    }];

    UIView *view = [[UIView alloc] initWithFrame:CGRectInset(self.view.bounds, 40.0f, 40.0f)];
    view.backgroundColor = [UIColor greenColor];
    view.alpha = 0.0f;
    [self.view addSubview:view];
    
    [UIView animateWithDuration:5.0 animations:^{
        view.alpha = 1.0f;
    } completion:^(BOOL finished) {
        [self.glimpse stop];
    }];
        
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
