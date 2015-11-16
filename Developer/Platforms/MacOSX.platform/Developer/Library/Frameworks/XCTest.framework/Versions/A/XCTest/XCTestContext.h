//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, XCTestContextScope;

@interface XCTestContext : NSObject
{
    XCTestContextScope *_currentScope;
}

+ (CDUnknownBlockType)defaultAsynchronousUIElementHandler;
@property(retain, nonatomic) XCTestContextScope *currentScope; // @synthesize currentScope=_currentScope;
- (BOOL)handleAsynchronousUIElement:(id)arg1;
- (void)removeUIInterruptionMonitor:(id)arg1;
- (id)addUIInterruptionMonitorWithDescription:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performInScope:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *handlers;
- (id)init;
- (void)dealloc;

@end

