//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface _NSImageTypeData : NSObject
{
    NSArray *imageTypes;
    NSArray *imageFileTypes;
    NSArray *imagePasteboardTypes;
    NSRegularExpression *namedImageSuffixExpression;
    NSArray *imageUnfilteredTypes;
    NSArray *imageUnfilteredFileTypes;
    NSArray *imageUnfilteredPasteboardTypes;
    NSRegularExpression *namedImageUnfilteredSuffixExpression;
}

+ (void)initialize;
- (id)namedImageUnfilteredSuffixExpression;
- (id)namedImageSuffixExpression;
- (id)imageUnfilteredPasteboardTypes;
- (id)imageUnfilteredFileTypes;
- (id)imageUnfilteredTypes;
- (id)imagePasteboardTypes;
- (id)imageFileTypes;
- (id)imageTypes;
- (void)dealloc;

@end
