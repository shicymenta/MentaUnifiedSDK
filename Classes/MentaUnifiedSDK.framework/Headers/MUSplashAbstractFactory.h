//
//  Header.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/11/24.
//

#import <UIKit/UIKit.h>

@class MUAdSource;
@protocol MUSplashAbstractFactory <NSObject>

@required
- (instancetype)initWithSource:(MUAdSource *)source adspot:(id)adspot;

- (void)loadAd;

- (void)showInWindow:(UIWindow *)window;

- (void)destory;

//@optional

@end
