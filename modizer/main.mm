//
//  main.m
//  modizer
//
//  Created by yoyofr on 7/28/10.
//  Copyright __YoyoFR / Yohann Magnien__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsGenViewController.h"

int main(int argc, char *argv[]) {
    
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    
    //***********************
    //init stuff
    //***********************
    //settings
    [SettingsGenViewController loadSettings];
    [SettingsGenViewController restoreSettings];
    
    int retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
    return retVal;
}
