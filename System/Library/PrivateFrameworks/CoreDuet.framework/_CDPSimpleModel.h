/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/_CDPModel.h>

@protocol _CDPDataHarvester;
@class NSArray, NSIndexSet, NSString;

@interface _CDPSimpleModel : NSObject <_CDPModel> {

	BOOL _loaded;
	BOOL _scoresAreDirty;
	unsigned long long _NEmail;
	unsigned long long _size;
	unsigned long long _NPeople;
	double* _timestamp;
	BOOL* _userIsSender;
	BOOL* _userIsThreadInitiator;
	unsigned* _email;
	unsigned long long* _emailLength;
	float* _email2LogScore;
	unsigned* _people2Email;
	unsigned long long* _people2EmailLength;
	NSArray* _people;
	NSIndexSet* _testingIndices;
	BOOL _requireOutgoingInteraction;
	float _lambda;
	float _w0;
	id<_CDPDataHarvester> _harvester;

}

@property (nonatomic,readonly) unsigned long long nPeople; 
@property (nonatomic,readonly) unsigned long long nEmail; 
@property (nonatomic,readonly) NSArray * people; 
@property (nonatomic,retain) id<_CDPDataHarvester> harvester;              //@synthesize harvester=_harvester - In the implementation block
@property (nonatomic,readonly) float lambda;                               //@synthesize lambda=_lambda - In the implementation block
@property (nonatomic,readonly) float w0;                                   //@synthesize w0=_w0 - In the implementation block
@property (assign,nonatomic) BOOL requireOutgoingInteraction;              //@synthesize requireOutgoingInteraction=_requireOutgoingInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)maxNumberOfEmailsSupported;
-(void)dealloc;
-(float)lambda;
-(float)w0;
-(id<_CDPDataHarvester>)harvester;
-(void)_reallocModel;
-(unsigned*)_newIdsForPeople:(id)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)requireOutgoingInteraction;
-(cdp_prediction_result*)_newPredictionResultWithSeed:(unsigned*)arg1 seedLength:(unsigned long long)arg2 realSeedLength:(unsigned long long)arg3 maxTrainingEmailID:(unsigned)arg4 ;
-(void)_printUsers:(unsigned*)arg1 length:(unsigned long long)arg2 ;
-(void)loadModel:(/*^block*/id)arg1 ;
-(void)makePredictionForGroup:(id)arg1 clientType:(long long)arg2 limit:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setLambda:(float)arg1 w0:(float)arg2 ;
-(id)_testingIndices;
-(void)getEmail:(unsigned*)arg1 emailLength:(unsigned long long*)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)nPeople;
-(unsigned long long)nEmail;
-(void)_printEmailWithID:(unsigned long long)arg1 ;
-(void)_printUserWithID:(unsigned long long)arg1 ;
-(void)_printPrediction:(cdp_prediction_result*)arg1 ;
-(id)peopleWithID:(unsigned)arg1 ;
-(void)setHarvester:(id<_CDPDataHarvester>)arg1 ;
-(void)setRequireOutgoingInteraction:(BOOL)arg1 ;
-(NSArray *)people;
@end

