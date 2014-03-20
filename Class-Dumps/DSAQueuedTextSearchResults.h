//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSADocSet, NSArray;

__attribute__((visibility("hidden")))
@interface DSAQueuedTextSearchResults : NSObject
{
    DSADocSet *_docSet;
    NSArray *_fullTextResults;
    NSArray *_nodeTextResults;
    float _maximumFullTextRelevance;
}

@property float maximumFullTextRelevance; // @synthesize maximumFullTextRelevance=_maximumFullTextRelevance;
@property(retain) NSArray *nodeTextResults; // @synthesize nodeTextResults=_nodeTextResults;
@property(retain) NSArray *fullTextResults; // @synthesize fullTextResults=_fullTextResults;
- (void).cxx_destruct;
- (void)prefetchNodes;
- (id)mergedResults;
- (BOOL)isComplete;
- (id)initForDocSet:(id)arg1;

@end
