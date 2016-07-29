/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray;

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject {

	BOOL _hidden;
	NSArray* _fixedLayoutAttributes;
	NSArray* _tileLayoutAttributes;
	NSArray* _floatingLayoutAttributes;
	long long _sectionType;
	long long _previousVisibleSection;
	long long _nextVisibleSection;
	long long _firstJoinedSection;
	long long _lastJoinedSection;
	id _groupID;
	long long _numberOfTilesOmitted;
	CGPoint _origin;
	CGSize _size;
	CGSize _headerSize;
	CGSize _footerSize;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) CGPoint origin;                                  //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize headerSize;                               //@synthesize headerSize=_headerSize - In the implementation block
@property (assign,nonatomic) CGSize footerSize;                               //@synthesize footerSize=_footerSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                            //@synthesize margins=_margins - In the implementation block
@property (nonatomic,retain) NSArray * fixedLayoutAttributes;                 //@synthesize fixedLayoutAttributes=_fixedLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSArray * tileLayoutAttributes;                  //@synthesize tileLayoutAttributes=_tileLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSArray * floatingLayoutAttributes;              //@synthesize floatingLayoutAttributes=_floatingLayoutAttributes - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                     //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long sectionType;                           //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) long long previousVisibleSection;                //@synthesize previousVisibleSection=_previousVisibleSection - In the implementation block
@property (assign,nonatomic) long long nextVisibleSection;                    //@synthesize nextVisibleSection=_nextVisibleSection - In the implementation block
@property (assign,nonatomic) long long firstJoinedSection;                    //@synthesize firstJoinedSection=_firstJoinedSection - In the implementation block
@property (assign,nonatomic) long long lastJoinedSection;                     //@synthesize lastJoinedSection=_lastJoinedSection - In the implementation block
@property (nonatomic,retain) id groupID;                                      //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) long long numberOfTilesOmitted;                  //@synthesize numberOfTilesOmitted=_numberOfTilesOmitted - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
-(CGSize)size;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(CGRect)frame;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(long long)sectionType;
-(NSArray *)fixedLayoutAttributes;
-(NSArray *)floatingLayoutAttributes;
-(long long)firstJoinedSection;
-(long long)lastJoinedSection;
-(long long)numberOfTilesOmitted;
-(UIEdgeInsets)margins;
-(NSArray *)tileLayoutAttributes;
-(void)setFirstJoinedSection:(long long)arg1 ;
-(void)setLastJoinedSection:(long long)arg1 ;
-(void)setPreviousVisibleSection:(long long)arg1 ;
-(void)setNextVisibleSection:(long long)arg1 ;
-(id)groupID;
-(void)setGroupID:(id)arg1 ;
-(long long)previousVisibleSection;
-(void)setFixedLayoutAttributes:(NSArray *)arg1 ;
-(void)setHeaderSize:(CGSize)arg1 ;
-(void)setFooterSize:(CGSize)arg1 ;
-(void)setTileLayoutAttributes:(NSArray *)arg1 ;
-(void)setFloatingLayoutAttributes:(NSArray *)arg1 ;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setSectionType:(long long)arg1 ;
-(CGSize)headerSize;
-(CGSize)footerSize;
-(long long)nextVisibleSection;
-(void)setNumberOfTilesOmitted:(long long)arg1 ;
@end

