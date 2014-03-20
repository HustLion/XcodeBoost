//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSControl : NSView
{
    long long _tag;
    id _cell;
    struct __conFlags _conFlags;
}

+ (unsigned long long)defaultFocusRingType;
+ (Class)cellClass;
+ (void)setCellClass:(Class)arg1;
+ (void)initialize;
+ (BOOL)accessibilityIsSingleCelled;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
- (void)setBaseWritingDirection:(long long)arg1;
- (long long)baseWritingDirection;
- (id)_backgroundColorForFontSmoothing;
- (void)heartBeat:(CDStruct_d41e72e8 *)arg1;
- (BOOL)_wantsHeartBeat;
- (void)_windowChangedKeyState;
- (void)rightMouseDown:(id)arg1;
- (void)_rightMouseUpOrDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (long long)userInterfaceLayoutDirection;
- (void)setAllowsLogicalLayoutDirection:(BOOL)arg1;
- (BOOL)allowsLogicalLayoutDirection;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)performClick:(id)arg1;
- (void)_setControlTextDelegateFromOld:(id)arg1 toNew:(id)arg2;
- (void)updateTrackingAreas;
- (void)resetCursorRects;
- (id)_setWindow:(id)arg1;
- (void)validateEditing;
- (void)_validateEditing:(id)arg1;
- (BOOL)abortEditing;
- (id)currentEditor;
- (void)textViewDidChangeSelection:(id)arg1;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)_removeAllCellMouseTracking;
- (void)_clearMouseTrackingForCell:(id)arg1;
- (void)_setMouseTrackingForCell:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_shouldTrackWithNonEditableCell;
- (void)drawRect:(struct CGRect)arg1;
- (void)layout;
- (void)_didRemoveLayer;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)_shouldShowFirstResponderForCell:(id)arg1;
- (id)_findCurrentEditor;
- (void)takeObjectValueFrom:(id)arg1;
- (void)takeStringValueFrom:(id)arg1;
- (void)takeDoubleValueFrom:(id)arg1;
- (void)takeFloatValueFrom:(id)arg1;
- (void)takeIntegerValueFrom:(id)arg1;
- (void)takeIntValueFrom:(id)arg1;
- (id)_stringSearchParametersForListingViews;
- (BOOL)_resetIncrementalSearchOnFailure;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)selectCell:(id)arg1;
- (BOOL)_hasEditableCell;
- (unsigned long long)focusRingType;
- (void)setFocusRingType:(unsigned long long)arg1;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)didBecomeActiveFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)refusesFirstResponder;
- (void)setRefusesFirstResponder:(BOOL)arg1;
- (BOOL)needsPanelToBecomeKey;
- (void)drawCell:(id)arg1;
- (void)drawCellInside:(id)arg1;
- (void)updateCellInside:(id)arg1;
- (void)_updateCellImage:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)setNeedsDisplay;
- (id)objectValue;
- (double)doubleValue;
- (float)floatValue;
- (long long)integerValue;
- (int)intValue;
- (id)attributedStringValue;
- (id)stringValue;
- (void)setObjectValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setIntValue:(int)arg1;
- (void)setStringValue:(id)arg1;
- (id)formatter;
- (void)setFormatter:(id)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (void)setFloatingPointFormat:(BOOL)arg1 left:(unsigned long long)arg2 right:(unsigned long long)arg3;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (long long)sendActionOn:(long long)arg1;
- (long long)mouseDownFlags;
- (BOOL)ignoresMultiClick;
- (void)setIgnoresMultiClick:(BOOL)arg1;
- (long long)selectedTag;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)selectedCell;
- (void)setCell:(id)arg1;
- (id)cell;
- (void)_resetMaxLayoutWidthAtNextLayout;
- (BOOL)_hasSetMaxLayoutWidth;
- (void)_setHasSetMaxLayoutWidth:(BOOL)arg1;
- (BOOL)_setsMaxLayoutWidthAtFirstLayout;
- (void)_setSetsMaxLayoutWidthAtFirstLayout:(BOOL)arg1;
- (void)calcSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)sizeToFit;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)_canShowExpansionTooltips;
- (void)setAllowsExpansionToolTips:(BOOL)arg1;
- (BOOL)allowsExpansionToolTips;
- (BOOL)canSmoothFontsInLayer;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonControlInit;
- (id)accessibilityPopUpMenuParent:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (void)accessibilityPostNotification:(id)arg1 context:(id)arg2;
- (void)invalidateIntrinsicContentSizeForCell:(id)arg1;

@end
