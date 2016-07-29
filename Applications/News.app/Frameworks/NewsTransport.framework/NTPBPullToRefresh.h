/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying> {

	NSString* _viewId;
	int _viewType;
	SCD_Struct_NT7 _has;

}

@property (assign,nonatomic) BOOL hasViewType; 
@property (assign,nonatomic) int viewType;                   //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) BOOL hasViewId; 
@property (nonatomic,retain) NSString * viewId;              //@synthesize viewId=_viewId - In the implementation block
-(void)setViewType:(int)arg1 ;
-(void)setHasViewType:(BOOL)arg1 ;
-(BOOL)hasViewType;
-(BOOL)hasViewId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)viewType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)viewId;
-(void)setViewId:(NSString *)arg1 ;
@end

