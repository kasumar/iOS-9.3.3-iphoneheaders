/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CloudLibraryConnection;

@interface JaliscoImporter : NSObject {

	BOOL _isCancelled;
	float _progress;
	CloudLibraryConnection* _connection;

}

@property (nonatomic,readonly) CloudLibraryConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) float progress;                                   //@synthesize progress=_progress - In the implementation block
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(void)importTracksUpToRevision:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)setProgress:(float)arg1 ;
-(BOOL)isCancelled;
-(float)progress;
-(CloudLibraryConnection *)connection;
-(BOOL)includeHiddenItems;
-(id)initWithConnection:(id)arg1 ;
@end

