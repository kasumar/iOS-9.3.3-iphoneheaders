/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPRemoteCommandDelegate, OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray, NSString;

@interface MPRemoteCommand : NSObject {

	id<MPRemoteCommandDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _targetInvocations;
	unsigned _mediaRemoteCommandType;
	NSString* _contextID;
	BOOL _enabled;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 ;
-(BOOL)isSupported;
-(MRMediaRemoteCommandInfoRef)createCommandInfoRepresentation;
-(unsigned)mediaRemoteCommandType;
-(void)invokeCommandWithEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(BOOL)hasTargets;
-(void)notifyPropagatablePropertyChanged;
-(void)_addTarget:(id)arg1 action:(SEL)arg2 retainTarget:(BOOL)arg3 ;
-(id)_mediaRemoteCommandInfoOptions;
-(id)addTargetWithHandler:(/*^block*/id)arg1 ;
@end

