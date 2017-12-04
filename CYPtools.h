//
//  CYPtools.h
//  CYPtools
//
//  Created by chengyu on 2017/12/4.
//

#import <Foundation/Foundation.h>

@interface CYPtools : NSObject

/**
 创建单例实例

 @return 单例实例
 */
+(instancetype)shareTools;
/**
 返回聊天时间
 @param beTime 对应的时间戳
 @return 字符串格式时间
 */
- (NSString *)distanceTimeWithBeforeTime:(double)beTime;

@end
