//
//  SaintAnnotationView.h
//  Bang
//
//  Created by yyx on 15/11/12.
//  Copyright © 2015年 saint. All rights reserved.
//

#import <MAMapKit/MAMapKit.h>

@interface SaintAnnotationView : MAAnnotationView

@property (nonatomic,strong) NSString *driverId;
@property (nonatomic) NSInteger type;

@end
