//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSScreen : NSObject
{
    struct CGRect _frame;
    int _depth;
    int _screenNumber;
    id _auxiliaryStorage;
}

+ (void)_hideShieldWindowsForFullScreen;
+ (void)_showShieldWindowsForFullScreen;
+ (id)_screenForUUID:(id)arg1;
+ (BOOL)screensHaveSeparateSpaces;
+ (BOOL)_spacePerDisplay;
+ (double)_backingScaleFactorForScreen:(id)arg1;
+ (void)_resetCachedGreatestBackingScaleFactor;
+ (double)_deviceResolutionForScreen:(id)arg1;
+ (id)_screenForScreenNumber:(long long)arg1;
+ (void)_displayProfileChangedForScreenNumber:(long long)arg1;
+ (id)deepestScreen;
+ (BOOL)_zeroScreenIsNew;
+ (double)_zeroScreenHeight;
+ (double)_zeroScreenHeightCached;
+ (id)_zeroScreen;
+ (id)mainScreen;
+ (void)_resetScreens;
+ (void)_resetScreensLocked;
+ (id)screens;
+ (id)_screensLocked;
+ (void)_updateSavedFrames;
+ (void)_updateSavedFramesLocked;
+ (void)_invalidateCachedDepth;
+ (void)_invalidateCachedFrames;
+ (void)_resetCachedZeroScreenHeight;
+ (void)initialize;
+ (struct CGRect)_allScreensFrame;
+ (int)_shieldingWindowLevel;
+ (BOOL)_releaseAllCapturedScreens:(id *)arg1;
+ (BOOL)_captureAllScreens:(id *)arg1;
- (void)_hideShieldWindow;
- (void)_showShieldWindow;
- (BOOL)_isActiveScreen;
- (unsigned long long)_currentSpace;
- (id)_copyDisplayUUID;
- (struct CGRect)backingAlignedRect:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (struct CGRect)convertRectFromBacking:(struct CGRect)arg1;
- (struct CGRect)convertRectToBacking:(struct CGRect)arg1;
- (double)userSpaceScaleFactor;
- (long long)_screenNumber;
- (const int *)supportedWindowDepths;
- (void)dealloc;
- (id)init;
- (id)deviceDescription;
- (void)_saveVisibleFrameAtIndex:(long long)arg1;
- (struct CGRect)_savedVisibleFrame;
- (struct CGRect)visibleFrame;
- (void)_setCachedFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (double)backingScaleFactor;
- (void)_setCachedDisplayScaleFactor:(double)arg1;
- (id)colorSpace;
- (void)_setCachedColorSpace:(id)arg1;
- (void)_setCachedDepth:(int)arg1;
- (int)depth;
- (BOOL)_switchToSetting:(id)arg1 error:(id *)arg2;
- (id)_bestSettingSimilarToSetting:(id)arg1 exactMatch:(char *)arg2;
- (id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 refreshRate:(double)arg4 exactMatch:(char *)arg5;
- (id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 exactMatch:(char *)arg4;
- (id)_availableSettings;
- (id)_currentSetting;
- (BOOL)_releaseCapture:(id *)arg1;
- (BOOL)_isCaptured;
- (BOOL)_capture:(id *)arg1;
- (unsigned int)_displayID;
- (id)displayLinkWithHandler:(CDUnknownBlockType)arg1;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)addUpdateHandler:(CDUnknownBlockType)arg1;

@end
