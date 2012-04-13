//
//  AutoTaxiAppDelegate.h
//  AutoTaxi
//
//  Created by Marcos  Peñaranda on 13/04/2012.
//  Copyright (c) 2012 Virtual-Tec. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AutoTaxiAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
