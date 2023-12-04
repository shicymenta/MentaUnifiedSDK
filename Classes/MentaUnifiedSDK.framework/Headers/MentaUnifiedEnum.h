//
//  MentaUnifiedEnum.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/11/22.
//

#ifndef MentaUnifiedEnum_h
#define MentaUnifiedEnum_h


typedef NS_ENUM(NSUInteger, MUSlotType) {
    MUSlotTypeBanner       = 1,
    MUSlotTypeFeed         = 2,
    MUSlotTypeReward       = 3,
    MUSlotTypeInterstitial = 4,
    MUSlotTypeSplash       = 5,
};

typedef NS_ENUM(NSUInteger, MUSplashAdCloseMode) {
    MUSplashAdCloseMode_ByClickAd,        // 点击广告关闭
    MUSplashAdCloseMode_ByClickSkip,      // 点击跳过
    MUSplashAdCloseMode_TimeOver,         // 倒计时结束时关闭
};


typedef NS_ENUM(NSInteger, MUTrackingEventType) {
    MUTrackingEventTypeReq,
    MUTrackingEventTypeFill,
    MUTrackingEventTypeImp,
    MUTrackingEventTypeClick,
    MUTrackingEventTypeFail,
};


#endif /* MentaUnifiedEnum_h */
