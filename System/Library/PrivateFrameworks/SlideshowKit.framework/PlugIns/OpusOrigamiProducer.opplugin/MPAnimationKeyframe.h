/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MPAnimationPath, MCAnimationKeyframe;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	MPAnimationPath* _parentPath;
	MCAnimationKeyframe* _keyframe;
	double _time;
	unsigned long long _offsetType;
	double _preControl;
	double _postControl;

}

@property (assign,nonatomic) double time;                                //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) unsigned long long offsetType;              //@synthesize offsetType=_offsetType - In the implementation block
@property (assign,nonatomic) double preControl;                          //@synthesize preControl=_preControl - In the implementation block
@property (assign,nonatomic) double postControl;                         //@synthesize postControl=_postControl - In the implementation block
-(void)setParentPath:(id)arg1 ;
-(void)setKeyframe:(id)arg1 ;
-(void)copyVars:(id)arg1 ;
-(id)parentDocument;
-(id)fullDebugLog;
-(long long)relativeTimeCompare:(id)arg1 ;
-(void)dump;
-(unsigned long long)offsetType;
-(double)postControl;
-(double)preControl;
-(void)setOffsetType:(unsigned long long)arg1 ;
-(void)setPostControl:(double)arg1 ;
-(void)setPreControl:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
-(id)parentPath;
@end

