//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPStartTLSCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;	// IMP=0x0000000000018228
- (long long)minRequiredConnectionState;	// IMP=0x000000000001821d
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000018202
- (id)activityString;	// IMP=0x0000000000018196
- (id)commandTypeString;	// IMP=0x0000000000018177

@end
