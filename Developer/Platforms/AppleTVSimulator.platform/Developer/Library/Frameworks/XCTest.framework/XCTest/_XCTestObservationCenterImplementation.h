//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface _XCTestObservationCenterImplementation : NSObject
{
    NSMutableSet *_observers;
    _Bool _suspended;
}

@property _Bool suspended; // @synthesize suspended=_suspended;
@property(retain) NSMutableSet *observers; // @synthesize observers=_observers;
- (id)init;

@end

