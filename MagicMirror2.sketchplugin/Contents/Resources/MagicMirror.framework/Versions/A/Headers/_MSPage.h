//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayerGroup.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid;

@interface _MSPage : _MSLayerGroup <MSLayerGroup>
{
    double _zoomValue;
    MSSimpleGrid *_grid;
    MSRulerData *_horizontalRulerData;
    MSLayoutGrid *_layout;
    MSRulerData *_verticalRulerData;
    struct CGPoint _scrollOrigin;
}


- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
- (BOOL)hasDefaultValues;
@property(retain, nonatomic) MSRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
- (id)immutableModelObject;
- (void)initEmptyObject;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
- (id)primitiveGrid;
- (id)primitiveHorizontalRulerData;
- (id)primitiveLayout;
- (struct CGPoint)primitiveScrollOrigin;
- (id)primitiveVerticalRulerData;
- (double)primitiveZoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (void)setAsParentOnChildren;
- (void)setPrimitiveGrid:(id)arg1;
- (void)setPrimitiveHorizontalRulerData:(id)arg1;
- (void)setPrimitiveLayout:(id)arg1;
- (void)setPrimitiveScrollOrigin:(struct CGPoint)arg1;
- (void)setPrimitiveVerticalRulerData:(id)arg1;
- (void)setPrimitiveZoomValue:(double)arg1;
@property(retain, nonatomic) MSRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;

@end

