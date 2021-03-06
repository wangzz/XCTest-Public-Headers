//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface XCAXManager_OSX : NSObject
{
    struct __AXUIElement *_systemWideElement;
    NSMutableDictionary *_observersByPID;
    NSMutableArray *_activeMenus;
    NSMapTable *_snapshotDictionariesByRootElement;
    NSMutableDictionary *_notificationHandlers;
}

+ (id)sharedManager;
- (id)interruptingUIElementsAffectingSnapshot:(id)arg1;
- (id)_windowsPotentiallyInterferingWithAXUIElement:(struct __AXUIElement *)arg1;
- (void)requestMainThreadIdleNotificationForApplicationWithPID:(int)arg1;
- (void)removeObserver:(id)arg1 forAXNotification:(id)arg2;
- (id)addObserverForAXNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerForAXNotificationsForApplicationWithPID:(int)arg1;
- (id)screenshotData;
- (id)attributesForElementSnapshot:(id)arg1 attributeList:(id)arg2 error:(id *)arg3;
- (const struct __AXUIElement *)copyElementRefForElementAtPoint:(struct CGPoint)arg1 error:(id *)arg2;
- (id)snapshotForApplicationWithPID:(int)arg1 attributeList:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (void)_reparentContextMenusForRootElement:(id)arg1 attributeList:(id)arg2;
- (id)_snapshotForElement:(struct __AXUIElement *)arg1 withRootElement:(struct __AXUIElement *)arg2 attributeList:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (void)startObservingApplication:(struct __AXUIElement *)arg1;
- (void)_handleNotification:(id)arg1 accessibilityElement:(id)arg2 info:(id)arg3;
@property(readonly) NSArray *defaultAttributes;
- (id)init;

@end

