//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "DVTFilePathFieldCellDelegate.h"
#import "IDEBuildFolderLocationSheetControllerDelegate.h"

@class DVTFilePathField, IDEXcodeSelectHelper, NSArrayController, NSAttributedString, NSPopUpButton, NSString, NSTextField;

@interface IDELocationsPrefsPaneController : IDEViewController <DVTFilePathFieldCellDelegate, IDEBuildFolderLocationSheetControllerDelegate>
{
    NSString *_customDerivedDataLocation;
    NSString *_customSnapshotsLocation;
    NSString *_customDistributionArchivesLocation;
    int _derivedDataLocationStyle;
    int _snapshotsLocationStyle;
    int _distributionArchivesLocationStyle;
    int _buildLocationStyle;
    NSString *_sharedBuildFolderName;
    int _customBuildLocationType;
    NSString *_customBuildProductsPath;
    NSString *_customBuildIntermediatesPath;
    IDEXcodeSelectHelper *_xcodeSelectHelper;
    DVTFilePathField *_derivedDataFilePathField;
    NSTextField *_derivedDataRelativePathField;
    DVTFilePathField *_snapshotsFilePathField;
    DVTFilePathField *_distributionArchivesFilePathField;
    DVTFilePathField *_derivedDataPathLabel;
    DVTFilePathField *_snapshotsPathLabel;
    DVTFilePathField *_distributionArchivesPathLabel;
    NSPopUpButton *_commandLineToolsPopUp;
    NSArrayController *_commandLineToolsArrayController;
    NSTextField *_derivedDataRelativePathLabel;
}

+ (id)keyPathsForValuesAffectingCustomWorkspaceRelativeDerivedDataLocation;
+ (id)keyPathsForValuesAffectingUseCustomDistributionArchivesLocation;
+ (id)keyPathsForValuesAffectingUseCustomSnapshotsLocation;
+ (id)keyPathsForValuesAffectingUseCustomDerivedDataLocation;
@property(copy) NSString *customBuildIntermediatesPath; // @synthesize customBuildIntermediatesPath=_customBuildIntermediatesPath;
@property(copy) NSString *customBuildProductsPath; // @synthesize customBuildProductsPath=_customBuildProductsPath;
@property int customBuildLocationType; // @synthesize customBuildLocationType=_customBuildLocationType;
@property(copy) NSString *sharedBuildFolderName; // @synthesize sharedBuildFolderName=_sharedBuildFolderName;
@property int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(nonatomic) int distributionArchivesLocationStyle; // @synthesize distributionArchivesLocationStyle=_distributionArchivesLocationStyle;
@property(nonatomic) int snapshotsLocationStyle; // @synthesize snapshotsLocationStyle=_snapshotsLocationStyle;
@property(nonatomic) int derivedDataLocationStyle; // @synthesize derivedDataLocationStyle=_derivedDataLocationStyle;
@property(copy, nonatomic) NSString *customDistributionArchivesLocation; // @synthesize customDistributionArchivesLocation=_customDistributionArchivesLocation;
@property(copy, nonatomic) NSString *customSnapshotsLocation; // @synthesize customSnapshotsLocation=_customSnapshotsLocation;
@property(copy, nonatomic) NSString *customDerivedDataLocation; // @synthesize customDerivedDataLocation=_customDerivedDataLocation;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)validateCustomSnapshotsLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomDistributionArchivesLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomDerivedDataLocation:(id *)arg1 error:(id *)arg2;
- (void)buildFolderLocationSheetDidEndWithBuildLocationStyle:(int)arg1 sharedBuildFolderName:(id)arg2 customBuildLocationType:(int)arg3 customBuildProductsPath:(id)arg4 customBuildIntermediatesPath:(id)arg5;
- (void)changeCommandLineTools:(id)arg1;
- (void)showBuildFolderLocationSheet:(id)arg1;
@property(readonly) NSString *defaultDistributionArchivesLocation;
@property(readonly) NSString *defaultSnapshotsLocation;
@property(readonly) NSString *defaultDerivedDataLocation;
@property(readonly) NSAttributedString *customWorkspaceRelativeDerivedDataLocation;
@property(readonly) BOOL useCustomDistributionArchivesLocation;
@property(readonly) BOOL useCustomSnapshotsLocation;
@property(readonly) BOOL useCustomDerivedDataLocation;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)_updateDistributionArchivesPathLabelForSelectedLocationStyle;
- (void)_updateSnapshotsPathLabelForSelectedLocationStyle;
- (void)_updateDerivedDataPathLabelForSelectedLocationStyle;
- (void)_updatePathLabelsForSelectedLocationStyles;
- (void)_updateDistributionArchivesCustomLocationFieldForPathType;
- (void)_updateSnapshotsCustomLocationFieldForPathType;
- (void)_updateDerivedDataCustomLocationFieldForPathType;
- (void)_updateCustomLocationFieldsForPathTypes;
- (void)_saveLocationsPreferences;
- (id)_xcodeSelectPopupSortDescriptors;
- (void)_windowDidResignMain:(id)arg1;
- (void)viewWillUninstall;
- (void)loadView;

@end
