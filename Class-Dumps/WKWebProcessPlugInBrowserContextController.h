//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKDOMDocument, WKDOMRange;

@interface WKWebProcessPlugInBrowserContextController : NSObject
{
    struct WKRetainPtr<const OpaqueWKBundlePage *> _bundlePageRef;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) WKDOMRange *selectedRange;
@property(readonly) WKDOMDocument *mainFrameDocument;
- (id)_initWithBundlePageRef:(struct OpaqueWKBundlePage *)arg1;
@property(readonly) struct OpaqueWKBundlePage *_bundlePageRef;

@end
