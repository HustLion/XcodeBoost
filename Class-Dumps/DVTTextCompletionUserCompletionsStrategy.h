//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTextCompletionStrategy.h>

@interface DVTTextCompletionUserCompletionsStrategy : DVTTextCompletionStrategy
{
}

- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 areDefinitive:(char *)arg3;
- (void)_addLang:(id)arg1 toExcludeSet:(id)arg2;
- (id)_completionsForLang:(id)arg1 excluding:(id)arg2;
- (id)_completionItemsForSpec:(id)arg1;

@end
