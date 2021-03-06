//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTCapacitySegment, DVTCapacityView, NSArray, NSFormatter, NSMutableArray, NSView;

@interface DVTCapacityViewController : DVTViewController
{
    NSMutableArray *_segmentValueObservers;
    NSMutableArray *_swatchValueLabels;
    DVTCapacityView *_capacityView;
    double _maxCapacity;
    DVTCapacitySegment *_unusedCapacitySegment;
    NSArray *_segments;
    NSFormatter *_valueFormatter;
    NSView *_leftLabelContainer;
    NSView *_rightLabelContainer;
}

+ (id)unusedColor;
+ (void)initialize;
@property __weak NSView *rightLabelContainer; // @synthesize rightLabelContainer=_rightLabelContainer;
@property __weak NSView *leftLabelContainer; // @synthesize leftLabelContainer=_leftLabelContainer;
@property(retain) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) DVTCapacitySegment *unusedCapacitySegment; // @synthesize unusedCapacitySegment=_unusedCapacitySegment;
@property(nonatomic) double maxCapacity; // @synthesize maxCapacity=_maxCapacity;
@property __weak DVTCapacityView *capacityView; // @synthesize capacityView=_capacityView;
- (void).cxx_destruct;
- (void)setUnusedCapacitySegmentLabel:(id)arg1;
- (id)createSwatchLabelForSegment:(id)arg1;
- (void)_recreateAndAddLabelsForSegments;
- (void)_addSegments:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 toLabelContainer:(id)arg4 setWidth:(BOOL)arg5;
- (void)resetAllSwatchLabels;
- (void)_handleSegmentValueChanged;
- (void)_createSegmentValueObservers;
- (void)_setCapacityViewSegments:(id)arg1;
- (void)_cancelSegmentValueObservers;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

