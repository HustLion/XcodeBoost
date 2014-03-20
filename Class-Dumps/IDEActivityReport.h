//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DVTInvalidation.h"
#import "DVTProgressReporting.h"

@class DVTStackBacktrace, DVTSystemActivityToken, NSArray, NSDictionary, NSImage, NSString;

@interface IDEActivityReport : NSObject <DVTProgressReporting, DVTInvalidation>
{
    NSArray *_completionSummaryStringSegments;
    NSString *_completionSummaryString;
    int _options;
    long long _progress;
    double _timestamp;
    double _displayPriority;
    NSArray *_titleSegments;
    NSString *_title;
    NSImage *_image;
    unsigned long long _fileIOPriority;
    CDUnknownBlockType _fileIOCoordinatorBlock;
    double _fileIOThrottleFactor;
    DVTSystemActivityToken *_suspendThrottlingToken;
}

+ (id)keyPathsForValuesAffectingPaused;
+ (BOOL)automaticallyNotifiesObserversOfFileIOThrottleFactor;
+ (id)keyPathsForValuesAffectingCompleted;
+ (void)initialize;
@property(readonly) double fileIOThrottleFactor; // @synthesize fileIOThrottleFactor=_fileIOThrottleFactor;
@property(readonly, copy) CDUnknownBlockType fileIOCoordinatorBlock; // @synthesize fileIOCoordinatorBlock=_fileIOCoordinatorBlock;
@property unsigned long long fileIOPriority; // @synthesize fileIOPriority=_fileIOPriority;
@property(copy) NSArray *completionSummaryStringSegments; // @synthesize completionSummaryStringSegments=_completionSummaryStringSegments;
@property(copy) NSString *completionSummaryString; // @synthesize completionSummaryString=_completionSummaryString;
@property double displayPriority; // @synthesize displayPriority=_displayPriority;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property long long progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSArray *titleSegments; // @synthesize titleSegments=_titleSegments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly) NSString *stringValue;
@property(readonly) BOOL paused;
- (void)_setFileIOThrottleFactor:(double)arg1;
@property(readonly, getter=isUserVisible) BOOL userVisible;
@property(readonly, getter=isFileIOIntensive) BOOL fileIOIntensive;
@property(readonly, getter=isPersistent) BOOL persistent;
@property(readonly) BOOL disableTitleAnimation;
@property(readonly) BOOL shouldDisplayImmediately;
@property(readonly) BOOL hidesProgress;
@property(readonly, getter=isSchemeBased) BOOL schemeBased;
@property(readonly, getter=isUserRequested) BOOL userRequested;
@property(readonly, getter=isCancelable) BOOL cancelable;
@property(readonly, getter=isCompleted) BOOL completed;
@property(readonly) int options; // @synthesize options=_options;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)description;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 titleSegments:(id)arg2 options:(int)arg3 image:(id)arg4 fileIOPriority:(unsigned long long)arg5 fileIOCoordinatorBlock:(CDUnknownBlockType)arg6;
- (id)_initWithTitle:(id)arg1 titleSegments:(id)arg2 options:(int)arg3 image:(id)arg4 fileIOPriority:(unsigned long long)arg5 fileIOCoordinatorBlock:(CDUnknownBlockType)arg6 unarchived:(BOOL)arg7;
- (void)setProgressAsNSNumber:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
