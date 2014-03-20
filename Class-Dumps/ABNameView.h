//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "ABNameView.h"

@class ABCardView, ABCardViewStyleProvider, ABShadowTextField, NSButton, NSDictionary, NSFont, NSFormatter, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSTextField;

__attribute__((visibility("hidden")))
@interface ABNameView : NSView <ABNameView>
{
    NSMutableArray *_rows;
    NSMutableDictionary *_initialPlacements;
    NSMutableDictionary *_fieldBindings;
    NSMutableSet *_dirtyFields;
    NSMutableSet *_displayedFields;
    NSMutableArray *mSubviewKeypathObservations;
    NSMapTable *_fieldToKeyMap;
    NSDictionary *_keyToFieldMap;
    id <ABCardViewDataSource> _dataSource;
    ABCardViewStyleProvider *_styleProvider;
    ABCardView *mCardView;
    NSButton *mCompanyCheckbox;
    NSTextField *mTitleAndDepartmentSeparator;
    ABShadowTextField *_completeNameView;
    ABShadowTextField *_suffixView;
    ABShadowTextField *_lastNameView;
    ABShadowTextField *_middleNameView;
    ABShadowTextField *_organizationView;
    ABShadowTextField *_departmentView;
    ABShadowTextField *_jobTitleView;
    ABShadowTextField *_nicknameView;
    ABShadowTextField *_firstNameView;
    ABShadowTextField *_titleView;
    ABShadowTextField *_completePhoneticNameView;
    ABShadowTextField *_phoneticLastNameView;
    ABShadowTextField *_phoneticMiddleNameView;
    ABShadowTextField *_phoneticFirstNameView;
    NSFont *_largeFont;
    NSFont *_normalFont;
    double _normalFontHeight;
    NSFormatter *_normalFormatter;
    NSFormatter *_nicknameFormatter;
    BOOL _editMode;
    BOOL _setSelectable;
    BOOL _shouldHideTitleAndDepartmentSeparator;
    struct CGPoint _currentPlacement;
    double _rowHeight;
    double _previousRowHeight;
    int _visibleRows;
}

+ (id)visibilityEquivalenceMap;
+ (id)keyToPreferenceMap;
+ (id)alwaysVisibleKeys;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) id <ABCardViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)newKeyToFieldMap;
- (id)newFieldToKeyMap;
- (void)setDisplayStyleFromCheckBox:(id)arg1;
- (BOOL)shouldUseValueFromNameField:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)reloadData;
- (void)reloadDataForKey:(id)arg1;
- (void)highlightSearchTerms:(id)arg1;
- (void)focusKey:(id)arg1;
- (BOOL)isPhoneticKey:(id)arg1;
- (BOOL)shouldPrunePhoneticView:(id)arg1;
- (BOOL)shouldPruneView:(id)arg1;
- (BOOL)defaultVisibilityForKey:(id)arg1;
- (BOOL)shouldPruneKey:(id)arg1;
- (id)updateKeyViewLoop;
- (void)adjustMyFrame;
- (void)updateCompanyCheckbox;
- (void)updateCompanyCheckBoxState;
- (void)updateCompanyCheckboxVisibility;
- (void)updateCompanyCheckboxColor;
- (void)layoutCompanyCheckbox;
- (void)removeFirstResponderSelection;
- (void)updateTextColor:(id)arg1;
- (void)updateAccessibilityForView:(id)arg1;
- (void)adjustTextFieldFrame:(id)arg1;
- (void)updateHidden:(id)arg1;
- (void)updateLineBreakMode:(id)arg1;
- (void)updatePlaceholderText:(id)arg1;
- (void)updateFont:(id)arg1;
- (void)updateFormatter:(id)arg1;
- (void)layoutView:(id)arg1;
- (void)layoutRow:(id)arg1;
- (void)layoutRows;
- (void)shiftRowsToImageMidpoint;
- (id)lastVisibleField;
- (void)setupLayoutFlags;
- (void)setupLayoutFonts;
- (void)updateNameFieldsOrderInLine:(id)arg1 usingKeys:(id)arg2;
- (void)updateNameFieldsOrder;
- (void)ab_layout;
- (void)commitEditing;
- (BOOL)isFlipped;
- (void)forceFullLayout;
- (void)queueFullLayout;
- (void)calculateRowLayout;
- (void)controlTextDidChange:(id)arg1;
- (id)valueFromNameField:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)ABNameView_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
