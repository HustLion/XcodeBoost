//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABAccountPermissions.h"

__attribute__((visibility("hidden")))
@interface ABDefaultAccountPermissions : NSObject <ABAccountPermissions>
{
}

+ (id)defaultAccountPermissions;
- (BOOL)groupsCanRemoveMembers;
- (BOOL)canRemoveGroup:(id)arg1;
- (BOOL)canRenameGroup:(id)arg1;
- (BOOL)canEditGroup:(id)arg1;
- (BOOL)canCreateGroups;
- (BOOL)canEditPerson:(id)arg1;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;

@end
