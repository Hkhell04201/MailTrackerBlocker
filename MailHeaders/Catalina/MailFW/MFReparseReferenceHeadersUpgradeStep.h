//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFReparseReferenceHeadersUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;	// 8 = 0x8
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;	// IMP=0x00000000001f77f8
+ (unsigned long long)targetVersion;	// IMP=0x00000000001f77ed
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
// - (void).cxx_destruct;	// IMP=0x00000000001f882f
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;	// IMP=0x00000000001f7e55
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;	// IMP=0x00000000001f78c9
- (id)initWithDatabaseConnection:(id)arg1 accounts:(id)arg2;	// IMP=0x00000000001f782b

@end

