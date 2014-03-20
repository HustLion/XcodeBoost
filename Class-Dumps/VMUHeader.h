//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VMUHeader : NSObject
{
}

+ (id)headerWithUniverse:(id)arg1 memory:(id)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
+ (id)headerWithMemory:(id)arg1 address:(unsigned long long)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
+ (id)extractMachOHeadersFromHeader:(id)arg1 matchingArchitecture:(id)arg2 considerArchives:(BOOL)arg3;
- (id)signature;
- (BOOL)isArchive;
- (BOOL)isMachO64;
- (BOOL)isMachO32;
- (BOOL)isMachO;
- (BOOL)isFat;

@end
