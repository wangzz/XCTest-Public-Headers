//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XCUIDevice : NSObject
{
}

+ (id)sharedDevice;
- (void)pressLockButton;
- (void)holdHomeButtonForDuration:(double)arg1;
- (void)pressButton:(long long)arg1;
- (void)_dispatchEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
@property(nonatomic) long long orientation;

@end

