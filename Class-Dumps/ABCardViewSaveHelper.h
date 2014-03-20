//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABCommandExecutor, AKCardViewDataSource, CNContactStore;

__attribute__((visibility("hidden")))
@interface ABCardViewSaveHelper : NSObject
{
    BOOL _isNewPerson;
    BOOL _isSaving;
    BOOL _hasSaved;
    AKCardViewDataSource *_dataSource;
    ABAddressBook *_legacyAddressBook;
    CNContactStore *_addressBook;
    ABCommandExecutor *_commandExecutor;
    id <ABCardViewSaveHelperDelegate> _delegate;
}

@property BOOL isNewPerson; // @synthesize isNewPerson=_isNewPerson;
@property id <ABCardViewSaveHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) ABAddressBook *legacyAddressBook; // @synthesize legacyAddressBook=_legacyAddressBook;
@property(retain) CNContactStore *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) ABCommandExecutor *commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property(readonly) BOOL isSaving; // @synthesize isSaving=_isSaving;
@property(retain) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)publicRecordsForAKRecords:(id)arg1;
- (id)makeCommandBuilderWithActionName:(id)arg1;
- (id)linkPeople:(id)arg1 withLinkIdentifier:(id)arg2;
- (id)makeSetImageCommandForPerson:(id)arg1;
- (id)makeLinkCommandForPeople:(id)arg1 linkIdentifier:(id)arg2;
- (id)makeDeleteCommandForDeletedPeople:(id)arg1;
- (id)makeDeleteCommand;
- (id)makeUpdateCommand;
- (id)makeAddCommandForPerson:(id)arg1 accountIdentifier:(id)arg2 personInserted:(BOOL)arg3;
- (void)executeCommand:(id)arg1;
- (void)deletePeople;
- (void)addPerson;
- (void)deleteUnsavedPerson;
- (id)propertiesToSetOnNewPerson;
- (id)personByApplyingChangesFromPerson:(id)arg1 toPerson:(id)arg2;
- (void)applyProperties:(id)arg1 fromPerson:(id)arg2 toPerson:(id)arg3;
- (id)makeNewPersonToStoreDataSourceChanges;
- (BOOL)dataSourceHasNonLinkChanges;
- (void)updatePeople;
- (BOOL)hasPhotoChanges;
- (BOOL)hasNameChanges;
- (void)preferForPhotoPerson:(id)arg1 inPeople:(id)arg2;
- (void)preferForNamePerson:(id)arg1 inPeople:(id)arg2;
- (void)addNewPersonToStoreDataSourceChanges;
- (BOOL)shouldAddNewPersonToStoreDataSourceChanges;
- (void)saveDataSourceWithChanges;
- (void)saveEmptyDataSource;
- (void)save;
- (BOOL)canSave;
- (void)dealloc;

@end
