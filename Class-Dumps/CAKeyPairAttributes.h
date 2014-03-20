//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAKeyPairAttributes : NSObject
{
    int _caKeySize;
    int _caKeyAlgorithm;
    int _caUserKeySize;
    int _caUserKeyAlgorithm;
    int _caCertAuthorityKeySize;
    int _caCertAuthorityKeyAlgorithm;
    BOOL _caDoneCAKeyPair;
    struct OpaqueSecAccessRef *_caSecAccessRef;
}

- (void)_updateKeyPairPanelToUserValues;
- (void)_saveUserKeyPairPanelValues;
- (void)_updateKeyPairPanelToCAValues;
- (void)_saveCAKeyPairPanelValues;
- (BOOL)_doneCAKeyPair;
- (void)_setDoneCAKeyPair:(BOOL)arg1;
- (int)_certAuthoritykeyAlgorithm;
- (void)_setCertAuthorityKeyAlgorithm:(int)arg1;
- (int)_userKeySize;
- (int)_userKeyAlgorithm;
- (void)_setKeyAlgorithm:(id)arg1;
- (int)_keyAlgorithm;
- (int)_certAuthorityKeySize;
- (void)_setCertAuthorityKeySize:(int)arg1;
- (void)_setKeySize:(id)arg1;
- (int)_keySize;
- (void)_setAccessRef:(struct OpaqueSecAccessRef *)arg1;
- (struct OpaqueSecAccessRef *)_accessRef;
- (void)_setToDefaults;
- (void)dealloc;

@end
