//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject
{
    struct WebInspectorFrontendClient {
        CDUnknownFunctionPointerType *;
        struct InspectorController *;
        struct Page *;
        struct RefPtr<WebCore::InspectorFrontendHost>;
        struct OwnPtr<WebCore::InspectorFrontendClientLocal::Settings>;
        _Bool;
        int;
        Vector_0575cd6f;
        struct OwnPtr<WebCore::InspectorBackendDispatchTask>;
        id;
        RetainPtr_d5c43307;
        struct String;
        struct HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL>>>;
    } *m_frontendClient;
}

- (void)showConsole;
- (void)setTimelineProfilingEnabled:(BOOL)arg1;
- (BOOL)isTimelineProfilingEnabled;
- (void)stopProfilingJavaScript;
- (void)startProfilingJavaScript;
- (BOOL)isProfilingJavaScript;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (BOOL)isDebuggingEnabled;
- (void)detach;
- (void)attach;
- (id)initWithFrontendClient:(struct WebInspectorFrontendClient *)arg1;

@end
