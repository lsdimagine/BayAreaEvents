//
//  AppDelegate.h
//  BayAreaMeetup
//
//  Created by Shidong Lin on 6/10/17.
//  Copyright © 2017 Shidong Lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

