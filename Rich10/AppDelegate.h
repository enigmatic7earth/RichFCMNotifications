//
//  AppDelegate.h
//  Rich10
//
//  Created by NETBIZ on 29/10/18.
//  Copyright © 2018 Netbiz.in. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
@import Firebase;

@interface AppDelegate : UIResponder <UIApplicationDelegate, UNUserNotificationCenterDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

