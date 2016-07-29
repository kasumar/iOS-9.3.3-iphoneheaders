/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack

@property (nonatomic,retain,readonly) NSURL * certificateURL; 
@property (nonatomic,retain,readonly) NSURL * contentURL; 
@property (getter=isITunesStream,nonatomic,readonly) BOOL ITunesStream; 
@property (nonatomic,retain,readonly) NSURL * keyServerURL; 
@property (getter=isSkipable,nonatomic,readonly) BOOL skipable; 
-(NSURL *)certificateURL;
-(BOOL)isITunesStream;
-(NSURL *)keyServerURL;
-(NSURL *)contentURL;
-(BOOL)isSkipable;
@end

