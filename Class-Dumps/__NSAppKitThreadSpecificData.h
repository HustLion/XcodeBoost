//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface __NSAppKitThreadSpecificData : NSObject
{
    struct {
        unsigned int hasWindowContexts:1;
        unsigned int reserved:31;
    } _akFlags;
    void *NSPThreadSelf;
    id NSCurrentGraphicsContext;
    id NSLastOnScreenGraphicsContext;
    id NSCGSContextThreadStateStack;
    id NSCurrentAppearance;
    id NSThreadFocusState;
    id NSThreadFocusStack;
    id reserved1;
    id NSGlyphGeneratorCache;
    id NSActionCellReplacementString;
    struct _NSRange NSActionCellSelectionRange;
    id NSAlertCache;
    id reserved2;
    id reserved3;
    id reserved4;
    unsigned int reserved5;
    id NSDisplayOperationStack;
    id NSColorPickerWheelImageCache;
    id NSPeriodicEventSource;
    id NSOriginalVersionDocument;
    id NSCurrentDocumentVersion;
    long long NSLockCount;
    id NSCurrentPrintOperation;
    id NSPrintInfoStorage;
    unsigned long long NSCachedTitleCellMask;
    id NSCachedTitleCellTitle;
    struct CGSize NSCachedTitleCellSize;
    id NSCurrentNibLoadingBundles;
    id NSCurrentNibPaths;
    struct __CFRunLoopObserver *NSCarbonAppRunLoopEnterObserverRef;
    struct __CFRunLoopObserver *NSCarbonAppRunLoopExitObserverRef;
    void *NSStringDrawingTextStorageSettings;
    id NSAnimationManager;
    id NSAnimationContextStack;
    long long NSThreadSequenceNumber;
}

- (id)init;

@end
