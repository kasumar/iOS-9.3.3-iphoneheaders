/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString, NSArray, NSMutableDictionary;

@interface PLSLibraryChangeSnapshot : NSObject <NSCoding> {

	NSDictionary* _updates;
	NSDictionary* _deletes;
	NSString* _libraryUUID;
	NSString* _libraryKind;
	BOOL _isFolderSync;
	NSArray* _orderedAlbums;
	NSDictionary* _albumsAndEventsByUUID;
	NSMutableDictionary* _assetsByUUID;

}

@property (nonatomic,retain) NSDictionary * updates;                            //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSDictionary * deletes;                            //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,retain) NSString * libraryUUID;                            //@synthesize libraryUUID=_libraryUUID - In the implementation block
@property (nonatomic,retain) NSString * libraryKind;                            //@synthesize libraryKind=_libraryKind - In the implementation block
@property (nonatomic,readonly) BOOL hasChangedObjects; 
@property (assign,nonatomic) BOOL isFolderSync;                                 //@synthesize isFolderSync=_isFolderSync - In the implementation block
@property (nonatomic,retain) NSArray * orderedAlbums;                           //@synthesize orderedAlbums=_orderedAlbums - In the implementation block
@property (nonatomic,retain) NSDictionary * albumsAndEventsByUUID;              //@synthesize albumsAndEventsByUUID=_albumsAndEventsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsByUUID;                //@synthesize assetsByUUID=_assetsByUUID - In the implementation block
+(BOOL)string:(id)arg1 equalsString:(id)arg2 ;
+(BOOL)number:(id)arg1 equalsNumber:(id)arg2 ;
+(id)librarySnapshot;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(NSString *)libraryKind;
-(BOOL)isFolderSync;
-(void)setLibraryKind:(NSString *)arg1 ;
-(void)setIsFolderSync:(BOOL)arg1 ;
-(NSDictionary *)albumsAndEventsByUUID;
-(void)setOrderedAlbums:(NSArray *)arg1 ;
-(BOOL)hasChangedObjects;
-(void)setAlbumsAndEventsByUUID:(NSDictionary *)arg1 ;
-(NSString *)libraryUUID;
-(BOOL)isEqualToSnapshot:(id)arg1 ;
-(NSArray *)orderedAlbums;
-(void)setLibraryUUID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableDictionary *)assetsByUUID;
-(void)setAssetsByUUID:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)updates;
-(NSDictionary *)deletes;
-(void)setUpdates:(NSDictionary *)arg1 ;
-(void)setDeletes:(NSDictionary *)arg1 ;
@end

