/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWZoomCompletionDelegate;
#import <Celestial/Celestial-Structs.h>
@class BWZoomDelayBuffer;

@interface BWZoomCommandHandler : NSObject {

	int _zoomLock;
	float _appliedZoomFactor;
	float _lastRequestedZoomFactor;
	BOOL _zoomFactorServiced;
	BWZoomDelayBuffer* _zoomDelayBuffer;
	BOOL _clientCanCompensateForDelay;
	id<BWZoomCompletionDelegate> _zoomCompletionDelegate;
	SCD_Struct_BW2 _lastFramePTS;
	SCD_Struct_BW2 _rampStartTime;
	float _rampCurrentVelocity;
	float _rampAcceleration;
	float _rampStartFactor;
	float _rampStartVelocity;
	float _rampTargetFactor;
	float _rampTargetVelocity;
	int _rampCommandID;
	BOOL _rampActive;

}

@property (assign) float requestedZoomFactor; 
@property (readonly) float appliedZoomFactor; 
@property (assign,nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegate;              //@synthesize zoomCompletionDelegate=_zoomCompletionDelegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3 ;
-(float)_zoomFactorForRampAtPTS:(SCD_Struct_BW2)arg1 ;
-(void)_activateRampMode:(BOOL)arg1 ;
-(float)requestedZoomFactor;
-(void)setRequestedZoomFactor:(float)arg1 ;
-(float)appliedZoomFactor;
-(void)setTypicalISPZoomDelay:(unsigned)arg1 clientCanCompensateForDelay:(BOOL)arg2 ;
-(float)updateZoomModelForNextFrameWithPTS:(SCD_Struct_BW2)arg1 ;
-(void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1 ;
-(id<BWZoomCompletionDelegate>)zoomCompletionDelegate;
-(void)setZoomCompletionDelegate:(id<BWZoomCompletionDelegate>)arg1 ;
@end

