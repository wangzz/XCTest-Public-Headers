//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SenTestProbe : NSObject
{
}

+ (BOOL)isLoadedFromApplication;
+ (BOOL)isProcessActingAsTestRig;
+ (BOOL)isLoadedFromTool;
+ (id)testScope;
+ (BOOL)isTesting;
+ (id)testedBundlePath;
+ (id)multiTestSuiteForScope:(id)arg1;
+ (id)specifiedTestSuite;
+ (void)runTestsAtUnitPath:(id)arg1 scope:(id)arg2;
+ (void)runTests:(id)arg1;
+ (void)_applicationFinishedLaunching:(id)arg1;
+ (void)initialize;
+ (void)load;

@end
