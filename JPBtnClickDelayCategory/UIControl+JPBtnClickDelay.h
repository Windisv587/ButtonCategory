//
//  UIControl+JPBtnClickDelay.h
//  ButtonCategory
//
//  Created by Chris on 16/8/3.
//  Copyright © 2016年 Chris. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (JPBtnClickDelay)

/** 延迟时间 */
@property(nonatomic)NSTimeInterval jp_acceptEventInterval;

/** 是否接受延迟 */
@property(nonatomic)BOOL jp_ignoreEvent;

@end
