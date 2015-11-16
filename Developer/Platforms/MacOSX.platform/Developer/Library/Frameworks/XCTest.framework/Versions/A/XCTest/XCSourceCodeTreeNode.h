//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSIndexPath, NSNumber, NSSet, NSString;

@interface XCSourceCodeTreeNode : NSObject <NSSecureCoding>
{
    NSString *_sourceCodePrefix;
    NSString *_sourceCodeSuffix;
    NSArray *_childNodes;
    long long _selectedChildNodeIndex;
    XCSourceCodeTreeNode *_parentNode;
    NSSet *_identifierValues;
    NSNumber *_index;
    NSString *_queryType;
    NSNumber *_returnType;
    NSNumber *_calleeType;
    NSNumber *_elementType;
}

+ (id)_stringRepresentationsOfNodesAsSeparateLines:(id)arg1 language:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)stringRepresentationsOfNodesAsSeparateLines:(id)arg1 language:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)_defaultOptions;
+ (id)treeForStringRepresentation:(id)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;
+ (struct _NSRange)_rangeOfFirstSourceCodeTreeInString:(id)arg1 range:(struct _NSRange)arg2 compiledSourceCodeRange:(struct _NSRange *)arg3 jsonRange:(struct _NSRange *)arg4;
+ (struct _NSRange)rangeOfFirstSourceCodeTreeInString:(id)arg1 range:(struct _NSRange)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)_sourceCodeForNodes:(id)arg1 error:(id *)arg2;
+ (BOOL)_isContentOfNodesArraysEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(long long)arg3;
+ (BOOL)_isContentOfNodesEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(long long)arg3;
+ (BOOL)_isContentEqualIgnoringSelection:(BOOL)arg1 childNodes:(id)arg2 childNodes:(id)arg3 toDistanceFromRoot:(long long)arg4;
+ (id)_nodesByMergingSimilarNodes:(id)arg1;
+ (void)_shareSourceCodeStringsForNodes:(id)arg1;
@property(copy, setter=_setElementType:) NSNumber *_elementType; // @synthesize _elementType;
@property(copy, setter=_setCalleeType:) NSNumber *_calleeType; // @synthesize _calleeType;
@property(copy, setter=_setReturnType:) NSNumber *_returnType; // @synthesize _returnType;
@property(copy, setter=_setQueryType:) NSString *_queryType; // @synthesize _queryType;
@property(copy, setter=_setIndex:) NSNumber *_index; // @synthesize _index;
@property(copy, setter=_setIdentifierValues:) NSSet *_identifierValues; // @synthesize _identifierValues;
- (void)_absorbOnlyChildrenIntoParents;
- (id)_treeByPushingOutPrefix:(id *)arg1 error:(id *)arg2;
- (id)copy;
- (id)_copyIncludingNodesWithDistanceFromRoot:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_copyIncludingNodesWithDistanceFromRoot:(unsigned long long)arg1 descendantChildrenArrays:(id)arg2 selectedChildNodeIndexes:(id)arg3;
- (id)_copyIncludingNodesWithMinimumDistanceFromLeaf:(unsigned long long)arg1 descendantChildrenArrays:(id)arg2 selectedChildNodeIndexes:(id)arg3;
- (BOOL)_canPushPutSolitaryRootNodes;
- (unsigned long long)_distanceFromRoot;
- (unsigned long long)_minimumDistanceFromLeaf;
- (unsigned long long)_maximumDistanceFromLeaf;
- (id)_stringRepresentationWithCompiledCodeRange:(struct _NSRange *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_stringRepresentationWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_leavesHaveNoNonLeafSiblingsAndHaveSamePrefix:(id *)arg1 suffix:(id *)arg2;
- (BOOL)_leavesHaveSameAccumulatedPrefix:(id *)arg1;
- (id)stringRepresentationWithCompiledCodeRange:(struct _NSRange *)arg1 error:(id *)arg2;
- (id)stringRepresentationWithError:(id *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_treeAsJSONWithError:(id *)arg1;
- (id)description;
- (id)descriptionWithDepth:(unsigned long long)arg1;
- (id)_depthStringWithDepth:(unsigned long long)arg1;
- (id)sourceCodeForAllDescendants;
- (id)selectedDescendantsSourceCodeWithError:(id *)arg1;
@property(retain) XCSourceCodeTreeNode *selectedChildNode;
- (id)selectedChildNodesIndexesWithError:(id *)arg1;
- (void)setChildrenOnAllLeafNodes:(id)arg1 selectChildNodeIndex:(unsigned long long)arg2;
- (BOOL)_isContentEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(unsigned long long)arg3;
- (unsigned long long)_descendantCount;
@property(readonly) NSIndexPath *selectedChildNodeIndexPath;
@property unsigned long long selectedChildNodeIndex;
@property(retain) NSArray *childNodes;
- (BOOL)setChildNodes:(id)arg1 error:(id *)arg2;
- (BOOL)_canHaveSiblingNode:(id)arg1;
@property(copy) NSString *sourceCodeSuffix;
@property(copy) NSString *sourceCodePrefix;
@property __weak XCSourceCodeTreeNode *parentNode;
@property(readonly) XCSourceCodeTreeNode *rootNode;
@property(readonly, copy) NSString *displayName;
- (void)dealloc;
- (id)initWithSourceCodePrefix:(id)arg1 sourceCodeSuffix:(id)arg2;
- (id)init;

@end

