//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary, NSXMLDocument;

@interface PKDistribution : NSObject <NSCoding, NSCopying>
{
    NSXMLDocument *_xmlDocument;
    NSMutableDictionary *_choicesByIdentifier;
    struct dispatch_queue_s *_choicesUpdateQueue;
    NSMutableDictionary *_pkgRefsByIdentifier;
    NSMutableArray *_pkgRefsInOrder;
    NSMutableDictionary *_stringsDictionaryByLocalization;
    struct dispatch_queue_s *_pkgRefsUpdateQueue;
}

+ (id)_element:(id)arg1 coalescedAttributesDictionaryWithChildrenNamed:(id)arg2;
+ (id)maxSupportedSpecVersion;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (void)setStringsDictionary:(id)arg1 forLocalization:(id)arg2;
- (id)stringsDictionaryForLocalization:(id)arg1;
- (id)_stringsElementForLocalization:(id)arg1;
- (id)localizations;
- (id)searchAttributesForIdentifier:(id)arg1;
- (id)_searchAttributeDictionaryForSearchElement:(id)arg1;
- (id)orderedSearchIdentifiers;
- (void)setEnabledValue:(id)arg1 forDomain:(int)arg2;
- (id)enabledScriptForDomain:(int)arg1 creatingIfNeeded:(BOOL)arg2;
- (id)enabledValueForDomain:(int)arg1;
- (id)_attributeNameForDomain:(int)arg1;
- (id)_choicesUsingPackageReference:(id)arg1;
- (id)allPackageIdentifiers;
- (id)packageReferenceForIdentifier:(id)arg1;
- (void)removeObjectFromPackageReferencesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPackageReferencesAtIndex:(unsigned long long)arg2;
- (id)objectInPackageReferencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfPackageReferences;
- (void)_didChangePkgRef:(id)arg1 originalIdentifier:(id)arg2 insertIndex:(unsigned long long)arg3;
- (id)_pkgRefsInOrder;
- (id)_pkgRefsByIdentifier;
- (void)__cachePkgRefElement:(id)arg1;
- (id)_futureSystemVersionDictionary;
- (void)setRequiredBundleComponents:(id)arg1 requireAll:(BOOL)arg2 description:(id)arg3;
- (id)descriptionOfRequiredBundleComponents;
- (BOOL)requireAllBundleComponents;
- (id)requiredBundleComponents;
- (void)setSupportedOSVersions:(id)arg1;
- (id)supportedOSVersions;
- (id)upgradeCheckScriptCreatingIfNeeded:(BOOL)arg1;
- (id)volumeCheckScriptCreatingIfNeeded:(BOOL)arg1;
- (void)setDescriptionOfRequiredGraphicsHardware:(id)arg1;
- (id)descriptionOfRequiredGraphicsHardware;
- (void)setRequireSingleGraphicsDevice:(BOOL)arg1;
- (BOOL)requireSingleGraphicsDevice;
- (void)setRequiredCLDevicePredicate:(id)arg1;
- (id)requiredCLDevicePredicate;
- (void)setRequiredGLRendererPredicate:(id)arg1;
- (id)requiredGLRendererPredicate;
- (void)_setRequiredGraphicsPredicate:(id)arg1 ofType:(id)arg2;
- (id)_requiredGraphicsPredicateOfType:(id)arg1;
- (void)setRequiredGigaBytesOfRAM:(id)arg1;
- (id)requiredGigaBytesOfRAM;
- (id)installationCheckScriptCreatingIfNeeded:(BOOL)arg1;
- (id)upgradeCheckScript;
- (id)volumeCheckScript;
- (id)installationCheckScript;
- (id)topScript;
- (id)_scriptUnder:(id)arg1 element:(id)arg2 attribute:(id)arg3 createIfNeeded:(BOOL)arg4;
- (void)setAuxInfoPropertyList:(id)arg1;
- (id)auxInfoPropertyList;
- (void)setTags:(id)arg1;
- (id)tags;
- (void)setOptionsDictionary:(id)arg1;
- (id)optionsDictionary;
- (void)_verifyAndRepairChoiceTreeWithReferencingElement:(id)arg1 movedOrSynthesizedChoices:(id *)arg2;
- (void)_findIncorrectlyNestedChoicesUnder:(id)arg1 addTo:(id)arg2;
- (void)_verifyAndRepairChoiceTreeForInterfaceType:(id)arg1;
- (id)choiceForIdentifier:(id)arg1;
- (id)rootChoiceForInterfaceType:(id)arg1 creatingIfNeeded:(BOOL)arg2;
- (id)interfaceTypes;
- (id)_choicesOutlineElementForInterfaceType:(id)arg1 creatingIfNeeded:(BOOL)arg2;
- (void)_didChangeChoice:(id)arg1 originalIdentifier:(id)arg2;
- (id)_choicesByIdentifier;
- (void)__cacheLineElements:(id)arg1;
- (void)setResourceAttributes:(id)arg1 forKey:(id)arg2;
- (id)resourceAttributesForKey:(id)arg1;
- (void)setResourceData:(id)arg1 forKey:(id)arg2;
- (id)resourceDataForKey:(id)arg1;
- (void)setVersionKey:(id)arg1;
- (id)versionKey;
- (void)setTitleKey:(id)arg1;
- (id)titleKey;
- (void)_setSystemImagePackageReferences:(id)arg1;
- (void)_setSystemImageInformation:(id)arg1;
- (id)_systemImagePackageReferences;
- (id)_systemImageInformation;
- (void)setProductVersion:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (id)productVersion;
- (id)productIdentifier;
- (id)objectForSourceURI:(id)arg1 returningAttributeName:(id *)arg2;
- (void)setPlatformAttributes:(id)arg1 forType:(id)arg2;
- (id)platformAttributesForType:(id)arg1;
- (id)_rootElement;
- (void)setMinSpecVersion:(id)arg1;
- (id)minSpecVersion;
- (id)_minSpecVersionAddingSupportedOSVersionIfNeeded:(BOOL)arg1;
- (double)_currentMinSpecVersionReturningSupportedOSVersion:(id *)arg1;
- (void)_setDistributionURL:(id)arg1;
- (id)XMLData;
- (id)distributionURL;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)_initWithXMLDocument:(id)arg1 error:(id *)arg2;

@end
