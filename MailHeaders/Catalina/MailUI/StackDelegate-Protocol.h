//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, StackController;

@protocol StackDelegate <NSObject>

@optional
- (void)stackController:(StackController *)arg1 willRemoveLayerForItem:(id)arg2;
- (void)stackController:(StackController *)arg1 willDisplayLayer:(CALayer *)arg2 forItem:(id)arg3;
- (void)stackController:(StackController *)arg1 willStackLayer:(CALayer *)arg2 forItem:(id)arg3;
- (void)stackController:(StackController *)arg1 dataLoadTimedOutInLayer:(CALayer *)arg2 forItem:(id)arg3;
- (void)stackControllerDidStopAnimatingLayers:(StackController *)arg1;
- (void)stackControllerWillStartAnimatingLayers:(StackController *)arg1;
- (void)stackControllerDidStopStackingLayers:(StackController *)arg1;
- (void)stackControllerWillStartStackingLayers:(StackController *)arg1;
@end

