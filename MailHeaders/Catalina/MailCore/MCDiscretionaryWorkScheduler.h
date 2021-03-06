//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MCNetworkTracker;

@interface MCDiscretionaryWorkScheduler : NSObject
{
    id _schedulerLock;	// 8 = 0x8
    unsigned long long _conditions;	// 16 = 0x10
    unsigned long long _unsatisfiedConditions;	// 24 = 0x18
    BOOL _overrideConditions;	// 32 = 0x20
    NSObject<MCNetworkTracker> *_networkTracker;	// 40 = 0x28
    BOOL _hasDeferrableWork;	// 48 = 0x30
    BOOL _suspended;	// 49 = 0x31
}

+ (id)keyPathsForValuesAffectingDeferDiscretionaryWork;	// IMP=0x0000000000049bbe
@property BOOL suspended; // @synthesize suspended=_suspended;
@property BOOL hasDeferrableWork; // @synthesize hasDeferrableWork=_hasDeferrableWork;
// - (void).cxx_destruct;	// IMP=0x0000000000049e77
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000049c34
@property(readonly) BOOL deferDiscretionaryWork;
@property BOOL overrideConditions;
- (void)_conditions:(unsigned long long)arg1 becameSatified:(BOOL)arg2;	// IMP=0x0000000000049aba
@property(readonly) unsigned long long unsatisfiedConditions;
- (void)_stopTrackingConditions:(unsigned long long)arg1;	// IMP=0x00000000000499ad
- (void)_startTrackingConditions:(unsigned long long)arg1;	// IMP=0x00000000000498e5
@property unsigned long long conditions;
@property(nonatomic) __weak NSObject<MCNetworkTracker> *networkTracker;
- (void)dealloc;	// IMP=0x000000000004968a
- (id)init;	// IMP=0x000000000004962c

@end

