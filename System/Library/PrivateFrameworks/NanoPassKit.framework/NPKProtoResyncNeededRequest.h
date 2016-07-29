/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying> {

	NPKProtoHash* _expectedHash;
	NSMutableArray* _manifestHashes;
	unsigned _resyncID;
	NSMutableArray* _uniqueIDs;
	BOOL _fullResyncNeeded;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasExpectedHash; 
@property (nonatomic,retain) NPKProtoHash * expectedHash;                  //@synthesize expectedHash=_expectedHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;                   //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * manifestHashes;              //@synthesize manifestHashes=_manifestHashes - In the implementation block
@property (assign,nonatomic) BOOL hasFullResyncNeeded; 
@property (assign,nonatomic) BOOL fullResyncNeeded;                        //@synthesize fullResyncNeeded=_fullResyncNeeded - In the implementation block
@property (assign,nonatomic) BOOL hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                            //@synthesize resyncID=_resyncID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(void)addUniqueIDs:(id)arg1 ;
-(void)addManifestHashes:(id)arg1 ;
-(void)setExpectedHash:(NPKProtoHash *)arg1 ;
-(unsigned long long)uniqueIDsCount;
-(void)clearUniqueIDs;
-(id)uniqueIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)manifestHashesCount;
-(void)clearManifestHashes;
-(id)manifestHashesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExpectedHash;
-(void)setFullResyncNeeded:(BOOL)arg1 ;
-(void)setHasFullResyncNeeded:(BOOL)arg1 ;
-(BOOL)hasFullResyncNeeded;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(BOOL)arg1 ;
-(BOOL)hasResyncID;
-(NPKProtoHash *)expectedHash;
-(NSMutableArray *)manifestHashes;
-(void)setManifestHashes:(NSMutableArray *)arg1 ;
-(BOOL)fullResyncNeeded;
-(unsigned)resyncID;
@end

