//
//  MUAPI.h
//  MentaUnifiedSDK
//
//  Created by iMacMe on 2023/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MUAPI : NSObject

+ (void)startWithAppID:(NSString *)appID
                appKey:(NSString *)appKey
           finishBlock:(void(^)(BOOL success,  NSError * _Nullable error))finishBlock;

/**
 * @brief 版本号
 * @discussion SDK Version 版本号
 */
+ (NSString *)sdkVersion;

/**
 * @brief 初始化状态
 * @discussion 检查  SDK 是否已经初始化成功
 */
+ (BOOL)isInitialized;

/**
 * @brief 日志开关
 * @param enableLog Debug模式 默认为 NO
 * @discussion 是否开启log 日志，可选
 */
+ (void)enableLog:(BOOL)enableLog;

/**
 * @brief 设置ua 外部传入ua后内部不再进行获取ua的操作
 * @discussion iOS ua 为系统全局属性, 一旦更改SDK内部会获取更改后的ua,为避免此情况, 开发者需根据自身情况获取ua 然后原始ua传入SDK
 */
+ (void)setCustomUA:(NSString *)ua;


/**
 * @brief IDFA开关
 * @param isCanUseIDFA 是否允许 SDK内部不获取系统的idfa权限
 * @discussion 是否允许使用IDFA， 不设置则默认为YES；设置为NO时，IDFA权限不可用，可通过setCustomIDFA传入有效的IDFA值
 */
+ (void)canUseIDFA:(BOOL)isCanUseIDFA;



/**
 * @brief 设置idfa值
 * @param idfa 传入idfa值，可选配置 SDK内部不获取系统的idfa权限
 * @discussion 可通过该方法传入您的IDFA值, isCanUseIDFA = YES 时 该设置无效, 若您的app有自己获取idfa的获取策略 则将 isCanUseIDFA置为NO, 然后设置该值即可生效
 */
+ (void)setCustomIDFA:(NSString *)idfa;


/**
 * @brief Pollux 值，原CAID 值
 * @param polluxValue 传入caid值，可选配置 SDK内部不会获取caid
 * @discussion 虽然设置caid 有助于提升变现收益, 但还是先建议先全面了解caid,再选择是否接入
 */
+ (void)setPolluxValue:(NSString *)polluxValue;

/**
 * @brief 算法版本，原CAID 算法版本
 */
+ (void)setPolluxVersion:(NSString *)polluxVersion;


@end

NS_ASSUME_NONNULL_END
