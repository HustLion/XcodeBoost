//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, NSArray, NSMutableDictionary, NSString;

@interface IDETemplateSection : NSObject
{
    NSMutableDictionary *_templateCategoriesByName;
    NSArray *_categories;
    DVTPlatform *_platform;
}

+ (id)keyPathsForValuesAffectingWillChangeDeviceSoftwareVersion;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (BOOL)navigableItem_isMajorGroup;
- (id)navigableItem_image;
- (id)navigableItem_name;
@property(readonly) NSArray *templates;
@property(readonly) NSArray *categories; // @synthesize categories=_categories;
- (void)sortAllCategories;
- (void)addTemplate:(id)arg1;
- (id)categoryWithName:(id)arg1;
@property(readonly) NSString *sectionIdentifier;
- (id)init;

@end
