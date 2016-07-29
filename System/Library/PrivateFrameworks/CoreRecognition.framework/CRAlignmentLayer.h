/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <QuartzCore/CALayer.h>

@class CATextLayer, CAShapeLayer, CALayer;

@interface CRAlignmentLayer : CALayer {

	CATextLayer* _instructionLayer;
	CAShapeLayer* _maskLayer;
	CAShapeLayer* _outlineLayer;
	CALayer* _infoLayer;
	CATextLayer* _cardNumberLayer;
	CATextLayer* _cardholderNameLayer;
	CATextLayer* _expirationDateLayer;

}

@property (retain) CATextLayer * instructionLayer;                 //@synthesize instructionLayer=_instructionLayer - In the implementation block
@property (retain) CAShapeLayer * maskLayer;                       //@synthesize maskLayer=_maskLayer - In the implementation block
@property (retain) CAShapeLayer * outlineLayer;                    //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (retain) CALayer * infoLayer;                            //@synthesize infoLayer=_infoLayer - In the implementation block
@property (retain) CATextLayer * cardNumberLayer;                  //@synthesize cardNumberLayer=_cardNumberLayer - In the implementation block
@property (retain) CATextLayer * cardholderNameLayer;              //@synthesize cardholderNameLayer=_cardholderNameLayer - In the implementation block
@property (retain) CATextLayer * expirationDateLayer;              //@synthesize expirationDateLayer=_expirationDateLayer - In the implementation block
+(id)layer;
-(id)init;
-(void)layoutSublayers;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)setInstructionLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)instructionLayer;
-(void)setInfoLayer:(CALayer *)arg1 ;
-(CALayer *)infoLayer;
-(void)setCardNumberLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)cardNumberLayer;
-(void)setCardholderNameLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)cardholderNameLayer;
-(void)setExpirationDateLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)expirationDateLayer;
-(void)resetLayer;
-(void)fadePlacementImage;
-(void)animateFoundCode:(id)arg1 codePosition:(CGPoint)arg2 codeFrameIndex:(unsigned long long)arg3 cardHolder:(id)arg4 cardholderPosition:(CGPoint)arg5 cardholderFrameIndex:(unsigned long long)arg6 expDate:(id)arg7 expdatePosition:(CGPoint)arg8 expDateFrameIndex:(unsigned long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)animateFoundCardRect:(id)arg1 ;
-(void)propogateMaskColor:(id)arg1 outlineColor:(id)arg2 placementTextColor:(id)arg3 capturedTextColor:(id)arg4 ;
-(CGRect)alignmentRect;
-(CAShapeLayer *)maskLayer;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
@end

