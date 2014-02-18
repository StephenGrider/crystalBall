//
//  CystalBall.m
//  CrystalBall
//
//  Created by stephen g on 2/15/14.
//  Copyright (c) 2014 stephen g. All rights reserved.
//

#import "CystalBall.h"

@implementation CystalBall


-(NSArray *) predictions {
    if(_predictions == nil){
        _predictions = @[@"Try again later", @"Yeah right", @"Everyone's goin to get laid tonight", @"Absolutely yes", @"Absolutely not", @"It is decidedly so", @"It is doubtful", @"Yeah she'll put out", @"Nope", @"Don't see that happening", @"Never", @"Maybe"];
    }
    return _predictions;
};
-(NSString *)randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return self.predictions[random];
};

@end
