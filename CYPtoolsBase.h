//
//  CYPtoolsBase.h
//  CYPtools
//
//  Created by chengyu on 2017/12/4.
//

#import <Foundation/Foundation.h>

@interface CYPtoolsBase : NSObject

/**
 提示框封装

 @param message 提示内容
 @param dissTime 显示时长
 */
+(void)showSVPWithSuccess:(NSString *) message dissTime:(NSTimeInterval) dissTime;
+(void)showSVPWithError:(NSString *) message dissTime:(NSTimeInterval) dissTime;




@end
