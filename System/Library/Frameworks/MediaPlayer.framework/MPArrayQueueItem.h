/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {

	MPAVItem* _item;
	NSString* _path;
	double _startTime;
	double _stopTime;

}

@property (nonatomic,readonly) MPAVItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double stopTime;                //@synthesize stopTime=_stopTime - In the implementation block
-(id)init;
-(MPAVItem *)item;
-(void)setStartTime:(double)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(double)startTime;
-(id)initWithMPAVItem:(id)arg1 ;
-(void)setStopTime:(double)arg1 ;
-(double)stopTime;
@end

