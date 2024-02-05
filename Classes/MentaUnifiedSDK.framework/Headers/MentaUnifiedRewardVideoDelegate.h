//
//  MentaUnifiedRewardVideoDelegate.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/12/19.
//
#import <MentaVlionBaseSDK/MentaVlionCommonEnum.h>
#import "MUAdProtocol.h"
@class MentaUnifiedRewardVideoAd;

@protocol MentaUnifiedRewardVideoDelegate <MUAdProtocol>

@optional

/// 广告策略服务加载成功
- (void)menta_didFinishLoadingRewardVideoADPolicy:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告源数据拉取成功
- (void)menta_rewardVideoAdDidLoad:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告视频下载成功
- (void)menta_rewardVideoAdMaterialDidLoad:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频加载失败
- (void)menta_rewardVideoAd:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd didFailWithError:(NSError * _Nullable)error description:(NSDictionary *_Nonnull)description;

/// 激励视频广告被点击了
- (void)menta_rewardVideoAdDidClick:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告关闭了
- (void)menta_rewardVideoAdDidClose:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd closeMode:(MentaRewardVideoAdCloseMode)mode;

/// 激励视频将要展现
- (void)menta_rewardVideoAdWillVisible:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告曝光
- (void)menta_rewardVideoAdDidExpose:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告播放达到激励条件回调
- (void)menta_rewardVideoAdDidRewardEffective:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告播放完成回调
- (void)menta_rewardVideoAdDidPlayFinish:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd;

/// 激励视频广告 展现的广告信息 曝光之前会触发该回调
- (void)menta_rewardVideoAd:(MentaUnifiedRewardVideoAd *_Nonnull)rewardVideoAd bestTargetSourcePlatformInfo:(NSDictionary *_Nonnull)info;

@end
