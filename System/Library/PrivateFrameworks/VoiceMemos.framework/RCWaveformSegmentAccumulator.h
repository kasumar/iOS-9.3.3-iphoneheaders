/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCWaveformGeneratorSegmentOutputObserver.h>

@class RCWaveformGenerator, NSMutableArray, NSString;

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver> {

	BOOL _finishedSuccessfully;
	RCWaveformGenerator* _generator;
	NSMutableArray* _segments;

}

@property (nonatomic,retain) RCWaveformGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) BOOL finishedSuccessfully;                  //@synthesize finishedSuccessfully=_finishedSuccessfully - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)waitUntilFinished;
-(void)dealloc;
-(RCWaveformGenerator *)generator;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(id)initWithWaveformGenerator:(id)arg1 ;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(BOOL)finishedSuccessfully;
-(void)setGenerator:(RCWaveformGenerator *)arg1 ;
@end

