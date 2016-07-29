/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSURL, NASAppSyncState;

@interface NASAppSyncStatePersistence : NSObject {

	NSFileManager* _fileManager;
	NSURL* _url;
	NASAppSyncState* _state;

}

@property (nonatomic,copy) NSURL * URL;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncState * state;              //@synthesize state=_state - In the implementation block
-(id)_errWithCode:(long long)arg1 desc:(id)arg2 err:(id)arg3 ;
-(id)_generateURLIfNeededWithError:(id*)arg1 ;
-(void)dealloc;
-(NASAppSyncState *)state;
-(id)reset;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)load;
-(id)save:(id)arg1 ;
-(id)_fileManager;
@end

