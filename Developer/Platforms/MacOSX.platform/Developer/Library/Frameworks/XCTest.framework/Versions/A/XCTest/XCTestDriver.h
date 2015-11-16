//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTestDriverInterface.h"
#import "XCTestManager_TestsInterface.h"

@class DTXConnection, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCConnection, XCTestSuite;

@interface XCTestDriver : NSObject <XCTestManager_TestsInterface, XCTestDriverInterface>
{
    XCTestSuite *_currentTestSuite;
    CDUnknownBlockType _completionHandler;
    NSXPCConnection *_managerConnection;
    BOOL _connectionInProgress;
    BOOL _waitingToStart;
    BOOL _runningSuite;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSUUID *_sessionIdentifier;
    NSString *_sessionSocketPath;
    DTXConnection *_IDEConnection;
    id <XCTestManager_IDEInterface> _IDEProxy;
    long long _IDEProtocolVersion;
    int _daemonAvailabilityToken;
}

+ (id)sharedTestDriver;
@property(readonly) long long IDEProtocolVersion; // @synthesize IDEProtocolVersion=_IDEProtocolVersion;
@property(readonly) id <XCTestManager_IDEInterface> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property(retain) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property XCTestSuite *currentTestSuite; // @synthesize currentTestSuite=_currentTestSuite;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (id)_IDE_startExecutingTestPlanWhenReady;
- (void)runTestSuite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkForTestManager;
- (void)_connectToTestManager;
- (void)_checkManagerDaemonStateAndConnectIfAvailable;
- (void)_resetManagerConnection;
- (void)_connectToIDEWithTransport:(id)arg1;
- (void)_runSuite;
- (void)resumeAppSleep:(id)arg1;
- (id)suspendAppSleep;
@property(readonly) id <XCTestManager_ManagerInterface> managerProxy;
- (id)init;

@end

