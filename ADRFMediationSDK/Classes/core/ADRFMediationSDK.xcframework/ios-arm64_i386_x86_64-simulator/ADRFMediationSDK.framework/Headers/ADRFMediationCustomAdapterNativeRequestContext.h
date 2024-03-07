//
//  ADRFMediationCustomAdapterNativeRequestContext.h
//  ADRFMediationSDK
//
//  Created by Suancai on 2023/3/6.
//

#import <ADRFMediationSDK/ADRFMediationCustomAdapterRequestContext.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADRFMediationCustomAdapterNativeRequestContext : ADRFMediationCustomAdapterRequestContext

/// 广告尺寸（若无则不使用）
@property (nonatomic, assign) CGSize adSize;

/// 请求数量
@property (nonatomic, assign) NSInteger loadCount;

/// 是否静音播放视频
@property (nonatomic, assign) BOOL muted;

/// 自定义参数
@property (nonatomic, strong) NSDictionary *extryMap;

@end

NS_ASSUME_NONNULL_END
