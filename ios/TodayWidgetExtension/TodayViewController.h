//
//  TodayViewController.h
//  TodayWidgetExtension
//
//  Created by Matej Kriz on 21.05.17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <React/RCTBundleURLProvider.h>
#import <React/RCTRootView.h>

@interface TodayViewController : UIViewController<RCTBridgeModule>
- (UIView*) shareView;
@end
