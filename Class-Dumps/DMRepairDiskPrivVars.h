//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DMManager;

__attribute__((visibility("hidden")))
@interface DMRepairDiskPrivVars : NSObject
{
    struct __DASession *_clientDASession;
    DMManager *_dmManager;
    char _sessionUUID[40];
    unsigned int _sessionF2Tport;
    unsigned int _sessionT2Fport;
    long long _verb;
}

@end
