//
//  Header.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/11/24.
//

#import <UIKit/UIKit.h>
#import "MUBaseAbstractFactory.h"
@class MUAdSource;
@protocol MUSplashAbstractFactory <MUBaseAbstractFactory>

@required
- (instancetype)initWithSource:(MUAdSource *)source adspot:(id)adspot;

- (void)loadAd;

- (void)showInWindow:(UIWindow *)window;

- (void)destory;

- (void)sendLossNoticeWithInfo:(NSDictionary *)lossInfo;

@end
