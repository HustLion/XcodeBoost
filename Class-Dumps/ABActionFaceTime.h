//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABActionDelegate.h"

@class NSString;

@interface ABActionFaceTime : NSObject <ABActionDelegate>
{
}

+ (BOOL)shouldOfferFaceTime;
- (id)_sanitizeValue:(id)arg1;
- (id)_faceTimeURLForValue:(id)arg1;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
@property(readonly) NSString *actionProperty;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;

@end
