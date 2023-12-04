//
//  MUSplashConfig.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/11/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface MUSplashConfig : NSObject
@property (nonatomic, copy) NSString *slotId;// 广告位id
@property (nonatomic) CGSize adSize;// 广告位尺寸 所有广告位必须要传 包括开屏
@property (nonatomic, weak) UIViewController *viewController; // 广告加载容器视图
@property (nonatomic, strong) UIView *bottomView; // 底部logo展示区域

/// 广告加载容忍时间
/// 建议3f~5f。如果设定的时间内没有竞价到广告，则判断竞价失败
@property (nonatomic, assign) NSInteger tolerateTime;

@end

NS_ASSUME_NONNULL_END
