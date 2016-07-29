/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSSPropertySource.h>

@class KNSlideStyle, NSUUID, NSArray, NSDictionary, KNMasterSlide, NSString;

@interface KNPrototypeForUndoMasterChange : TSPObject <TSSPropertySource> {

	KNSlideStyle* _style;
	NSUUID* _masterSlideId;
	NSArray* _drawableInfoIdList;
	NSArray* _placeholders;
	NSArray* _placeholderTagsList;
	NSArray* _childInfos;
	NSDictionary* _placeholdersForTags;

}

@property (nonatomic,retain) KNSlideStyle * slideStyle;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) KNMasterSlide * master; 
@property (nonatomic,readonly) NSArray * childInfos;                            //@synthesize childInfos=_childInfos - In the implementation block
@property (nonatomic,readonly) NSArray * placeholders;                          //@synthesize placeholders=_placeholders - In the implementation block
@property (nonatomic,readonly) NSDictionary * placeholdersForTags;              //@synthesize placeholdersForTags=_placeholdersForTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blobWithSlide:(id)arg1 ;
-(KNSlideStyle *)slideStyle;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(PrototypeForUndoMasterChangeArchive*)arg1 archiver:(id)arg2 ;
-(int)intValueForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(NSArray *)childInfos;
-(id)boxedObjectForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(NSDictionary *)placeholdersForTags;
-(void)rebuildChildInfosAndPlaceholders;
-(void)setSlideStyle:(KNSlideStyle *)arg1 ;
-(void)migrateStyles;
-(void)dealloc;
-(NSString *)description;
-(id)objectForProperty:(int)arg1 ;
-(id)initWithSlide:(id)arg1 ;
-(KNMasterSlide *)master;
-(NSArray *)placeholders;
@end

