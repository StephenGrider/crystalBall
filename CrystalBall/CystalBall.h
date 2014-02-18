//
//  CystalBall.h
//  CrystalBall
//
//  Created by stephen g on 2/15/14.
//  Copyright (c) 2014 stephen g. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CystalBall : NSObject{
    NSArray *_predictions;
}


@property(strong,nonatomic, readonly) NSArray *predictions;
-(NSArray *)predictions;
-(NSString *)randomPrediction;

@end
