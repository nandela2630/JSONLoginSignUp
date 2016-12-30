//
//  AppDelegate.h
//  JustRideTask2
//
//  Created by SanviWords on 12/30/16.
//  Copyright © 2016 SanviWords. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

