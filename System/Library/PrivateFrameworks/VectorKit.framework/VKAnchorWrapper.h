/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKAnchorDelegate.h>

@class VKAnchor, VKLayoutContext, MDDisplayLayer, NSString;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {

	VKAnchor* _anchor;
	BOOL _followsTerrain;
	CGPoint _screenPointInCanvas;
	VKLayoutContext* _lastLayoutContext;
	CGSize _lastCoordinate;
	BOOL _isUpdating;
	double _pointsPerMeter;
	MDDisplayLayer* _displayLayer;

}

@property (nonatomic,readonly) CGSize coordinate; 
@property (assign,nonatomic) BOOL followsTerrain;                        //@synthesize followsTerrain=_followsTerrain - In the implementation block
@property (assign,nonatomic) MDDisplayLayer * displayLayer;              //@synthesize displayLayer=_displayLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDisplayLayer:(MDDisplayLayer *)arg1 ;
-(void)layoutWithContext:(id)arg1 ;
-(BOOL)followsTerrain;
-(id)_anchorWithContext:(id)arg1 ;
-(MDDisplayLayer *)displayLayer;
-(void)_updateCachedPointWithContext:(id)arg1 ;
-(void)anchorWorldPointDidChange:(void*)arg1 ;
-(CGPoint)pointInLayer:(id)arg1 ;
-(void)setFollowsTerrain:(BOOL)arg1 ;
-(double)pointOffsetForDistanceOffset:(double)arg1 ;
-(void)updateIfNeeded;
-(CGSize)coordinate;
@end

