//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTBloomFilter, NSString;

@interface DVTDocumentFragmentFilter : NSObject
{
    DVTBloomFilter *filter;
    CDStruct_26ab8ed5 specification;
}

+ (id)normalizedFoldedString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp;
@property(readonly) NSString *usageDescription;
- (long long)indexSize;
- (BOOL)mightContainFragment:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(id)arg1 filterSpecification:(CDStruct_26ab8ed5)arg2;

@end
