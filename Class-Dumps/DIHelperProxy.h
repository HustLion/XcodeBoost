//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DIHLHelperMasterProtocol.h"

@class NSConditionLock, NSConnection, NSDictionary, NSDistantObject<DIHLHelperSlaveProtocol>, NSString, NSTask;

__attribute__((visibility("hidden")))
@interface DIHelperProxy : NSObject <DIHLHelperMasterProtocol>
{
    void *_context;
    NSDictionary *_operation;
    CDUnknownFunctionPointerType _statusProc;
    NSConditionLock *_threadCondLock;
    int _threadResultsError;
    NSDictionary *_threadResultsDictionary;
    NSDistantObject<DIHLHelperSlaveProtocol> *_helper;
    NSString *_helperPath;
    NSConnection *_helperConnection;
    BOOL _helperRegistered;
    BOOL _helperDone;
    NSString *_serverName;
    struct AuthorizationOpaqueRef *_authorizationRef;
    NSTask *_helperTask;
    BOOL _withAuthentication;
}

- (id)helperToolPath;
- (int)performOperationReturning:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)initWithDictionary:(id)arg1 andStatusProc:(CDUnknownFunctionPointerType)arg2 andContext:(void *)arg3 withAuthentication:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1 andStatusProc:(CDUnknownFunctionPointerType)arg2 andContext:(void *)arg3;
- (void)helperConnectionInitialized:(id)arg1;
- (void)helperConnectionDied:(id)arg1;
- (void)helperFailedToRegister;
- (void)helperDied:(id)arg1;
- (void)threadRunRunLoop;
- (int)threadLaunchToolAuthenticated:(BOOL)arg1;
- (BOOL)threadSetupServer;
- (void)workerThread:(id)arg1;
- (void)disconnectFromHelper:(id)arg1;
- (void)sendOperationToHelper:(id)arg1;
- (int)synchronousFrameworkCallbackWithDictionary:(id)arg1;
- (int)frameworkCallbackWithDictionary:(id)arg1;
- (void)reportResultsToFramework:(id)arg1;
- (void)connectToFramework:(id)arg1;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)arg1;
- (BOOL)isAuthenticated;
- (int)authenticate;

@end
