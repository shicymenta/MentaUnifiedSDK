//
//  MentaMVlionNativeAdView.h
//  MentaMVlionAdapter
//
//  Created by iMacMe on 2024/1/10.
//

#import <UIKit/UIKit.h>
#if __has_include(<MVlionSDK/MVlionSDK.h>)
#import <MVlionSDK/MVlionNativeAdView.h>
#import <MVlionSDK/MVlionNativeAdDataObject.h>

#else
#import "MVlionNativeAdView.h"
#import "MVlionNativeAdDataObject.h"

#endif


#if __has_include(<MentaUnifiedSDK/MentaUnifiedSDK.h>)

#import <MentaUnifiedSDK/MentaUnifiedNativeAdDelegate.h>
#import <MentaUnifiedSDK/MentaUnifiedNativeAd.h>


#else

#import "MentaUnifiedNativeAdDelegate.h"
#import "MentaUnifiedNativeAd.h"
#import "MentaNativeAdViewAbstractFactory.h"

#endif


NS_ASSUME_NONNULL_BEGIN
@class MVlionNativeAdView, MUAdSource;
@interface MentaMVlionNativeAdView : MVlionNativeAdView

- (instancetype)initWithDataObject:(MVlionNativeAdDataObject *)dataObject
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
