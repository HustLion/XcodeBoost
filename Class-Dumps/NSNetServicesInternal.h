//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSNetServicesInternal : NSObject
{
    NSMutableArray *_monitors;
    struct tcp_listener_s *_listener;
}

@property(retain) NSMutableArray *monitors; // @synthesize monitors=_monitors;
- (void)setListener:(struct tcp_listener_s *)arg1;
- (struct tcp_listener_s *)listener;
- (void)finalize;
- (void)dealloc;

@end
