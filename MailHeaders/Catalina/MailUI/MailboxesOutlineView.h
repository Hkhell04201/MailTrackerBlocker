//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@protocol MailboxesOutlineViewDelegate;

@interface MailboxesOutlineView : NSOutlineView
{
    BOOL _reloading;	// 136 = 0x88
    BOOL _allowsSelectAll;	// 137 = 0x89
    BOOL _showsUnnecessaryDisclosureTriangles;	// 138 = 0x8a
    BOOL _draggingIsBeingUpdated;	// 139 = 0x8b
}

@property(nonatomic) BOOL draggingIsBeingUpdated; // @synthesize draggingIsBeingUpdated=_draggingIsBeingUpdated;
@property(nonatomic) BOOL showsUnnecessaryDisclosureTriangles; // @synthesize showsUnnecessaryDisclosureTriangles=_showsUnnecessaryDisclosureTriangles;
@property(nonatomic) BOOL allowsSelectAll; // @synthesize allowsSelectAll=_allowsSelectAll;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;	// IMP=0x00000001001b6237
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;	// IMP=0x00000001001b6220
- (unsigned long long)draggingUpdated:(id)arg1;	// IMP=0x000000010008cb1a
- (void)reloadItem:(id)arg1;	// IMP=0x00000001001b61bc
- (void)reloadData;	// IMP=0x000000010002a099
- (void)noteNumberOfRowsChanged;	// IMP=0x00000001001b617e
- (void)_didReload;	// IMP=0x00000001000401e1
- (void)_triggerReloadNotification;	// IMP=0x000000010002f7f8
- (void)_willReload;	// IMP=0x000000010002a0d7
- (BOOL)inLiveResize;	// IMP=0x00000001000159b4
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)arg1;	// IMP=0x000000010008e008
- (id)menu;	// IMP=0x000000010007084e
- (void)selectAll:(id)arg1;	// IMP=0x00000001001b60bd
- (BOOL)resignFirstResponder;	// IMP=0x00000001001b606c
- (BOOL)becomeFirstResponder;	// IMP=0x00000001001b601b
- (BOOL)acceptsFirstResponder;	// IMP=0x000000010004b1cb
- (BOOL)acceptsFirstMouse:(id)arg1;	// IMP=0x00000001001b6013
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;	// IMP=0x0000000100016e16
@property __weak id <MailboxesOutlineViewDelegate> delegate;
- (void)_mailboxesOutlineViewCommonInit;	// IMP=0x0000000100014e7f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100014e09
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001b5f60

@end

