/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@class TSPLazyReference, TSDMovieInfo;

@interface KNRecordingMovieEvent : KNRecordingEvent {

	TSPLazyReference* mMovieInfoReference;
	long long mMovieEventType;
	double mMovieEventValue;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (nonatomic,readonly) long long movieEventType; 
@property (nonatomic,readonly) double movieEventValue; 
@property (nonatomic,readonly) double seekTime; 
@property (nonatomic,readonly) double rate; 
@property (nonatomic,readonly) BOOL beginsScrubbing; 
@property (nonatomic,readonly) BOOL endsScrubbing; 
@property (nonatomic,readonly) BOOL startsPlayback; 
@property (nonatomic,readonly) BOOL stopsPlayback; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)initWithStartTime:(double)arg1 ;
-(BOOL)isIgnoredWhenSeeking;
-(id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 movieEventType:(long long)arg3 movieEventValue:(double)arg4 ;
-(long long)movieEventType;
-(double)movieEventValue;
-(id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 seekTime:(double)arg3 ;
-(id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 rate:(double)arg3 ;
-(id)initWithStartTime:(double)arg1 startingPlaybackForMovieInfo:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 stoppingPlaybackForMovieInfo:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 beginningScrubbingForMovieInfo:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 endingScrubbingForMovieInfo:(id)arg2 withRate:(double)arg3 ;
-(BOOL)beginsScrubbing;
-(BOOL)endsScrubbing;
-(BOOL)startsPlayback;
-(BOOL)stopsPlayback;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDMovieInfo *)movieInfo;
-(double)rate;
-(double)seekTime;
@end

