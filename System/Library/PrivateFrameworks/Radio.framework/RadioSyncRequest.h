/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest, NSDictionary, NSString;

@interface RadioSyncRequest : RadioRequest {

	NSObject*<OS_dispatch_queue> _artworkQueue;
	unsigned long long _globalVersion;
	SSURLConnectionRequest* _request;
	NSDictionary* _responseDictionary;
	BOOL _disableArtworkLoading;
	BOOL _includeCleanTracksOnly;
	BOOL _isAutomaticUpdate;
	NSString* _referer;
	NSDictionary* _resultingOverrideBagDictionary;

}

@property (assign,nonatomic) BOOL disableArtworkLoading;                                        //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;                                       //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (assign,nonatomic) BOOL isAutomaticUpdate;                                            //@synthesize isAutomaticUpdate=_isAutomaticUpdate - In the implementation block
@property (nonatomic,copy) NSString * referer;                                                  //@synthesize referer=_referer - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resultingOverrideBagDictionary;              //@synthesize resultingOverrideBagDictionary=_resultingOverrideBagDictionary - In the implementation block
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(id)responseDictionary;
-(id)matchDictionary;
-(id)_sortedChangesByType:(id)arg1 ;
-(id)_stationSortOrderForChanges:(id)arg1 ;
-(id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long*)arg3 loadArtworkSynchronously:(BOOL)arg4 ;
-(void)setDisableArtworkLoading:(BOOL)arg1 ;
-(BOOL)disableArtworkLoading;
-(BOOL)includeCleanTracksOnly;
-(BOOL)isAutomaticUpdate;
-(NSString *)referer;
-(void)setReferer:(NSString *)arg1 ;
-(NSDictionary *)resultingOverrideBagDictionary;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(void)setIsAutomaticUpdate:(BOOL)arg1 ;
-(id)changeList;
@end

