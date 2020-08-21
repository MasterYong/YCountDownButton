//
//  YCountDownButton.h
//  BaoXianBaApp
//
//  Created by huayu on 16/10/12.
//  Copyright © 2016年 yjyc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YCountDownButton;
typedef NSString* (^CountDownChanging)(YCountDownButton *countDownButton,NSUInteger second);
typedef NSString* (^CountDownFinished)(YCountDownButton *countDownButton,NSUInteger second);

typedef void (^TouchedCountDownButtonHandler)(YCountDownButton *countDownButton,NSInteger tag);
@interface YCountDownButton : UIButton
{
    NSInteger _second;
    NSUInteger _totalSecond;
    
    NSTimer *_timer;
    NSDate *_startDate;
    
    CountDownChanging _countDownChanging;
    CountDownFinished _countDownFinished;
    TouchedCountDownButtonHandler _touchedCountDownButtonHandler;
}
@property(nonatomic,strong) id userInfo;

-(void)countDownButtonHandler:(TouchedCountDownButtonHandler)touchedCountDownButtonHandler;
-(void)countDownChanging:(CountDownChanging)countDownChanging;
-(void)countDownFinished:(CountDownFinished)countDownFinished;

-(void)startCountDownWithSecond:(NSUInteger)second;
-(void)stopCountDown;


//
 
@end
