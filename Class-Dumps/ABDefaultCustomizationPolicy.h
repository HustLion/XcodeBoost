//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABAccountCustomizationPolicy.h"

@interface ABDefaultCustomizationPolicy : NSObject <ABAccountCustomizationPolicy>
{
}

+ (id)customizationPolicy;
- (BOOL)usesSyncServices;
- (BOOL)showAllContactsIfOnlyOneGroup;
- (id)defaultAccountDescription;
- (long long)sortOrder;
- (BOOL)supportsDistributionLists;
- (BOOL)supportsPhotos;
- (BOOL)supportsPhoneticName;
- (BOOL)canReimportFromMetadata;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)groupsCanRemoveMembers;
- (id)directoryLabelForAccountName:(id)arg1;
- (id)allContactsLabelForAccountName:(id)arg1;

@end
