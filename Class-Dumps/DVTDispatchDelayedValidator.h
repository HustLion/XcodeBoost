//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTStackBacktrace;

@interface DVTDispatchDelayedValidator : NSObject
{
    CDUnknownBlockType _validateBlock;
    DVTStackBacktrace *_debugInvalidationBacktrace;
    DVTDispatchLock *_ivarAccessLock;
    double _delay;
    unsigned long long _dispatchGeneration;
    struct dispatch_queue_s *_dispatchQueue;
    BOOL _scheduledValidation;
}

@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)cancelValidation;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
