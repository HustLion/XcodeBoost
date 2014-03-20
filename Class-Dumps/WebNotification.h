//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebNotificationPrivate;

__attribute__((visibility("hidden")))
@interface WebNotification : NSObject
{
    WebNotificationPrivate *_private;
}

- (void)dispatchErrorEvent;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchShowEvent;
- (unsigned long long)notificationID;
- (id)origin;
- (id)dir;
- (id)lang;
- (id)iconURL;
- (id)tag;
- (id)body;
- (id)title;
- (id)init;
- (id)initWithCoreNotification:(struct Notification *)arg1 notificationID:(unsigned long long)arg2;

@end
