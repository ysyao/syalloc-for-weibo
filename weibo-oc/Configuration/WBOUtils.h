//
//  WBOUtils.h
//  weibo-oc
//
//  Created by 易诗尧 on 2020/12/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WBOUtils : NSObject

+ (UIWindow *)findKeyWindow:(NSArray<UIWindow *> *)windows;

+ (void)setTabBarItem:(UIViewController *)viewController WithImageName:(NSString *)imageName title:(NSString *)title;

+ (UINavigationController *)newNavigationControlerBy:(Class)clazz;
@end

NS_ASSUME_NONNULL_END
