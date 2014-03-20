//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, NSMutableArray, NSString, NSTimer;

@interface DVTPerformanceMetric : NSObject
{
    DVTLogAspect *_aspect;
    int _logLevel;
    id <DVTSelfInstrumentationSession> _selfInstrumentationSession;
    NSString *_label;
    NSString *_context;
    NSString *_result;
    NSString *_profileLogInfo;
    id _identifier;
    NSMutableArray *_checkpoints;
    struct __CFRunLoopObserver *_runLoopObserver;
    double _tolerance;
    double _start;
    double _end;
    double _expectedDuration;
    double _lastRunLoopPollTime;
    double _maxRunLoopBusyInterval;
    NSTimer *_expireTimer;
    double _expireInterval;
    BOOL _logImmediately;
    BOOL _stopWhenRunLoopIdle;
    BOOL _checkpointSkipsInstrumentsSignal;
}

+ (Class)selfInstrumentationClass;
+ (id)startedMetricForAspect:(id)arg1 logLevel:(int)arg2 label:(id)arg3;
+ (id)metricWithIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)runLoopBeforeSources;
- (void)runLoopBeforeTimers;
- (void)runLoopWaking;
- (void)runLoopSleeping;
- (void)monitorRunLoop;
- (void)expire:(id)arg1;
- (void)setExpireInterval:(double)arg1;
- (void)_registerForRunLoopCallouts;
- (void)setExpectedDuration:(double)arg1 tolerance:(double)arg2;
- (void)stopWhenRunLoopIdle;
- (void)setContextString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)logPerformanceMetricData;
- (void)checkpoint:(id)arg1;
- (void)setResultString:(id)arg1;
- (void)setEndTime;
- (void)setStartTime;
- (id)initWithAspect:(id)arg1 logLevel:(int)arg2 label:(id)arg3;

@end
