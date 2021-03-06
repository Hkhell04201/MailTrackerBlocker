//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MessageList-Protocol.h"

@class NSArray;
@protocol ThreadedMessageListDelegate;

@protocol ThreadSupportingMessageList <MessageList>
@property(readonly, nonatomic) __weak id <ThreadedMessageListDelegate> delegate;
- (void)closeAllThreads;
- (void)closeThreads:(NSArray *)arg1;
- (void)openAllThreads;
- (void)openThreads:(NSArray *)arg1;
@end

