/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject {

	NSString* _playlistGlobalID;
	long long _storeAdamID;
	unsigned long long _tasteType;
	long long _type;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) NSString * playlistGlobalID;               //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                     //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) unsigned long long tasteType;              //@synthesize tasteType=_tasteType - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
-(id)init;
-(long long)type;
-(NSUUID *)UUID;
-(unsigned long long)tasteType;
-(id)initWithPlaylistGlobalID:(id)arg1 tasteType:(unsigned long long)arg2 ;
-(id)initWithStoreAdamID:(long long)arg1 tasteType:(unsigned long long)arg2 ;
-(void)_initializeWithType:(long long)arg1 tasteType:(unsigned long long)arg2 ;
-(NSString *)playlistGlobalID;
-(long long)storeAdamID;
@end

