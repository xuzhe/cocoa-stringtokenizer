//
//  TokenizerDemoAppDelegate.h
//  TokenizerDemo
//
//  Created by August Joki on 10/25/09.
//  Copyright Concinnous Software 2009. All rights reserved.
//

@interface TokenizerDemoAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;

@end

