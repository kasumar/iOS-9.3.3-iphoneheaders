/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Media/Media-Structs.h>
@class NSString;

@interface MPAssistantPlaybackQueue : NSObject {

	BOOL _shouldOverrideManuallyCuratedQueue;
	BOOL _shouldImmediatelyStartPlayback;
	NSString* _contextID;

}

@property (nonatomic,readonly) NSString * contextID;                               //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;              //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldImmediatelyStartPlayback;                  //@synthesize shouldImmediatelyStartPlayback=_shouldImmediatelyStartPlayback - In the implementation block
-(void)setShouldImmediatelyStartPlayback:(BOOL)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(BOOL)shouldImmediatelyStartPlayback;
-(NSString *)contextID;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(id)initWithContextID:(id)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
@end

