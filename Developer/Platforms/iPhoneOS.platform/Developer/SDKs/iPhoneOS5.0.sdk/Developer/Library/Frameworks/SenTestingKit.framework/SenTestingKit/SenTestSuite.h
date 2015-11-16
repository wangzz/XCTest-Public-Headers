//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SenTestingKit/SenTest.h>

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface SenTestSuite : SenTest <NSCoding>
{
    NSString *name;
    NSMutableArray *tests;
}

+ (id)testSuiteWithName:(id)arg1;
+ (id)emptyTestSuiteNamedFromPath:(id)arg1;
+ (void)updateCache;
+ (void)invalidateCache;
+ (id)suiteForBundleCache;
+ (id)testSuiteForBundlePath:(id)arg1;
+ (id)testSuiteForTestCaseWithName:(id)arg1;
+ (id)testSuiteForTestCaseClass:(Class)arg1;
+ (id)structuredTests;
+ (id)allTests;
+ (id)defaultTestSuite;
- (id)initWithName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)name;
- (id)description;
- (void)addTest:(id)arg1;
- (void)addTestsEnumeratedBy:(id)arg1;
- (unsigned int)testCaseCount;
- (Class)testRunClass;
- (void)performTest:(id)arg1;

@end

