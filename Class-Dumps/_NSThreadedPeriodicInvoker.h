//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSPeriodicInvoker.h>

__attribute__((visibility("hidden")))
@interface _NSThreadedPeriodicInvoker : _NSPeriodicInvoker
{
    struct dispatch_queue_s *queue;
}

- (void)finalize;
- (void)dealloc;
- (void)cancel;
- (void)setWorkBlock:(CDUnknownBlockType)arg1;
- (void)setDelayFunction:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;

@end
