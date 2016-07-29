/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCAudioPlaylist, NSDictionary, MCPlug;

@interface MCContainer : MCObject {

	unsigned short mFlags;
	unsigned short mSpecialRetainCount;
	MCAudioPlaylist* mAudioPlaylist;
	NSDictionary* mInitialState;
	MCPlug* mReferencingPlug;

}

@property (readonly) MCAudioPlaylist * audioPlaylist; 
@property (readonly) MCAudioPlaylist * audioPlaylistCreateIfNeeded; 
@property (readonly) MCPlug * referencingPlug; 
@property (retain) NSDictionary * initialState; 
-(MCAudioPlaylist *)audioPlaylistCreateIfNeeded;
-(MCPlug *)referencingPlug;
-(void)specialRelease;
-(id)specialRetain;
-(void)referenceByPlug:(id)arg1 ;
-(void)unreferenceByPlug:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)demolish;
-(void)dealloc;
-(id)init;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(MCAudioPlaylist *)audioPlaylist;
-(id)imprint;
@end

