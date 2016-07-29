/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/DeeplinkPrediction.bundle/DeeplinkPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKEvent, NSString, NSMutableArray;

@interface DPEScoredEvent : NSObject {

	_DKEvent* _dkEvent;
	double _score;
	NSString* _dedupingKey;
	NSMutableArray* _interactions;

}

@property (nonatomic,readonly) _DKEvent * dkEvent;                       //@synthesize dkEvent=_dkEvent - In the implementation block
@property (nonatomic,readonly) double score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSString * dedupingKey;                   //@synthesize dedupingKey=_dedupingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * interactions;              //@synthesize interactions=_interactions - In the implementation block
+(id)dedupingKeyForDKEvent:(id)arg1 ;
-(double)halfLife;
-(id)predictionItem:(unsigned)arg1 ;
-(NSString *)dedupingKey;
-(void)addDKEvent:(id)arg1 baseScore:(double)arg2 overrideSubScore:(double)arg3 ;
-(_DKEvent *)dkEvent;
-(id)initWithDKEvent:(id)arg1 dedupingKey:(id)arg2 baseScore:(double)arg3 ;
-(void)adjustScoreForReferenceDate:(id)arg1 eventStore:(id)arg2 ;
-(id)initWithDKEvent:(id)arg1 overrideSubScore:(double)arg2 ;
-(long long)compare:(id)arg1 ;
-(void)setInteractions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)interactions;
-(double)score;
@end

