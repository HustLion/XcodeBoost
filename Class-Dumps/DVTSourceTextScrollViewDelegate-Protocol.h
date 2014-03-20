//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTSourceTextScrollView, NSEvent, NSScroller;

@protocol DVTSourceTextScrollViewDelegate <NSObject>

@optional
- (NSScroller *)scrollView:(DVTSourceTextScrollView *)arg1 pointInVisibleScroller:(struct CGPoint)arg2;
- (void)scrollViewDidSetFrameSize:(DVTSourceTextScrollView *)arg1;
- (void)scrollViewDidEndLiveResize:(DVTSourceTextScrollView *)arg1;
- (void)scrollViewWillStartLiveResize:(DVTSourceTextScrollView *)arg1;
- (void)scrollView:(DVTSourceTextScrollView *)arg1 didReceiveScrollWheelEvent:(NSEvent *)arg2;
@end
