//
//  MentaUnifiedSplashAd.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/11/22.
//

#import <Foundation/Foundation.h>
#import "MentaUnifiedSplashAdDelegate.h"
#import "MentaUnifiedAdSpotDefine.h"
@class MUSplashConfig;
NS_ASSUME_NONNULL_BEGIN

@interface MentaUnifiedSplashAd : NSObject<MentaUnifiedAdSpotDefine>


/// 初始化时传入的config
@property (nonatomic, strong, readonly) MUSplashConfig *config;

/// 开屏广告代理
@property (nonatomic,weak) id <MentaUnifiedSplashAdDelegate> delegate;



- (instancetype)initWithConfig:(MUSplashConfig *)config;


- (void)loadAd;


- (void)showInWindow:(UIWindow *)window;


@end

NS_ASSUME_NONNULL_END
