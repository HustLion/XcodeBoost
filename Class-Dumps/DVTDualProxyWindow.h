//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class DVTDualProxyWindowTitleView, NSString, NSURL;

@interface DVTDualProxyWindow : NSWindow
{
    DVTDualProxyWindowTitleView *_titleView;
    NSURL *_secondaryRepresentedURL;
    NSString *_titlePrefix;
    CDUnknownBlockType _primaryRepresentedDocumentBlock;
    CDUnknownBlockType _secondaryRepresentedDocumentBlock;
}

- (void).cxx_destruct;
- (id)_accessibilityTitleCell;
- (struct CGRect)_accessibilityTitleRect;
- (id)accessibilityTitleUIElementAttribute;
- (void)dvt_updateTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
@property(copy) CDUnknownBlockType secondaryRepresentedDocumentBlock;
@property(copy) CDUnknownBlockType primaryRepresentedDocumentBlock;
@property(copy) NSString *titlePrefix;
@property(copy) NSURL *secondaryRepresentedURL;
- (void)setRepresentedURL:(id)arg1;
- (void)invalidateTitle;
- (BOOL)_isTitleHidden;
- (void)close;
- (id)dvt_titleView;

@end
