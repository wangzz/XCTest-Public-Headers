//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SenTestingKit/SenTestObserver.h>

@interface SenTestDistributedNotifier : SenTestObserver
{
}

+ (id)notificationIdentifier;
+ (id)userInfoForObject:(id)arg1 userInfo:(id)arg2;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (void)testSuiteDidStart:(id)arg1;
+ (void)testSuiteDidStop:(id)arg1;
+ (void)testCaseDidStart:(id)arg1;
+ (void)testCaseDidStop:(id)arg1;
+ (void)testCaseDidFail:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;

@end

