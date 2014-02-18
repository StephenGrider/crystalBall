//
//  ViewController.h
//  CrystalBall
//
//  Created by stephen g on 2/12/14.
//  Copyright (c) 2014 stephen g. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CystalBall;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CystalBall *crystalBall;
-(void)makePrediction;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
