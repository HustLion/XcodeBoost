//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration.h"

__attribute__((visibility("hidden")))
@interface __CFHashTable : NSObject <NSFastEnumeration>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (void)removeObject:(id)arg1;
- (id)member:(id)arg1;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;

@end
