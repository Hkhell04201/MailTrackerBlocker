//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MFMessageConsumer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFPersistedMessageForwardingIterator : NSObject <MFMessageConsumer>
{
    CDUnknownBlockType _handler;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;	// IMP=0x0000000000187ada
- (void)finishedSendingMessages;	// IMP=0x0000000000187ac3
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;	// IMP=0x0000000000187a65
@property(readonly) BOOL shouldCancel;
- (id)initWithHandler:(id)arg1;	// IMP=0x00000000001879f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
