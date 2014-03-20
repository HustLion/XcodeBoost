//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol ABVCardValueSetter <NSObject>
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(NSString *)arg2;
- (void)setUnknownProperties:(NSArray *)arg1;
- (BOOL)setImageData:(NSData *)arg1 forReference:(NSString *)arg2 clipRects:(NSArray *)arg3;
- (id)valueForProperty:(NSString *)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (BOOL)canSetValueForProperty:(NSString *)arg1;
@end
