//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardCollectionView.h>

@interface ABTemplateCardCollectionView : ABCardCollectionView
{
}

- (BOOL)isTemplate;
- (void)removeItem:(id)arg1;
- (void)addNewItem:(id)arg1 giveFocus:(BOOL)arg2;
- (void)collectionItem:(id)arg1 didChangeService:(id)arg2;
- (void)collectionItem:(id)arg1 didChangeLabel:(id)arg2;
- (void)setControlsEditable:(BOOL)arg1 inView:(id)arg2;
- (void)ab_layout;

@end
