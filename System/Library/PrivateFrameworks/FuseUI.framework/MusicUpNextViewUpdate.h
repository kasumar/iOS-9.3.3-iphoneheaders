/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MusicUpNextViewUpdate : NSObject {

	unsigned long long _type;
	NSArray* _indexPaths;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * indexPaths;                 //@synthesize indexPaths=_indexPaths - In the implementation block
-(id)debugDescription;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(NSArray *)indexPaths;
-(id)_stringForUpdateType:(unsigned long long)arg1 ;
@end

