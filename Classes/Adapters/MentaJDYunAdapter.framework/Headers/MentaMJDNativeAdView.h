//
//  MentaMJDNativeAdView.h
//  MentaJDYunAdapter
//
//  Created by iMacMe on 2024/3/8.
//

#import <UIKit/UIKit.h>

#if __has_include(<MentaUnifiedSDK/MentaUnifiedSDK.h>)

#import <MentaUnifiedSDK/MentaUnifiedNativeAdDelegate.h>
#import <MentaUnifiedSDK/MentaUnifiedNativeAd.h>



#else

#import "MentaUnifiedNativeAdDelegate.h"
#import "MentaUnifiedNativeAd.h"

#endif

#if __has_include(<JADYunCore/JADYunUmbrella.h>)
#import <JADYunCore/JADYunUmbrella.h>
#else
#import <JADYun/JADYunUmbrella.h>
#endif

#if __has_include(<JADYun/JADNativeAd.h>)
#import <JADYun/JADNativeAd.h>
#else
#import "JADNativeAd.h"
#endif


NS_ASSUME_NONNULL_BEGIN
@class MUAdSource;
@interface MentaMJDNativeAdView : UIView
- (instancetype)initWithDataObject:(JADNativeAd *)dataObject
                          delegate:(id<MentaUnifiedNativeAdDelegate>)delegate
                            adSpot:(MentaUnifiedNativeAd *)adSpot
                            source:(MUAdSource *)source;

- (void)registerClickableViews:(nullable NSArray<UIView *> *)clickableViews
                closeableViews:(nullable NSArray<UIView *> *)closeableViews;

@property (nonatomic, strong, readonly) UIView *logoImageView;

@property (nonatomic, assign, readonly) CGSize logoSize;

- (void)destoryNativeAdView;

@end

NS_ASSUME_NONNULL_END
