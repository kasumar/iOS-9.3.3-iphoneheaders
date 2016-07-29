/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>
#import <iWorkImport/TSDCanvasSelection.h>
@class NSSet;


@protocol TSDCanvasSelection <NSObject,NSCopying>
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
@required
+(id)emptySelection;
-(NSSet *)unlockedInfos;
-(BOOL)containsKindOfClass:(Class)arg1;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1;
-(id)infosOfClass:(Class)arg1;
-(id)copyIncludingInfo:(id)arg1;
-(id)copyExcludingInfo:(id)arg1;
-(unsigned long long)infoCount;
-(unsigned long long)unlockedInfoCount;
-(BOOL)isEmpty;
-(NSSet *)infos;

@end


@class NSSet, NSString;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection> {

	NSSet* mInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
+(Class)archivedSelectionClass;
+(id)emptySelection;
-(void)saveToArchive:(CanvasSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const CanvasSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithInfos:(id)arg1 ;
-(NSSet *)unlockedInfos;
-(BOOL)containsKindOfClass:(Class)arg1 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)infosOfClass:(Class)arg1 ;
-(id)copyIncludingInfo:(id)arg1 ;
-(id)copyExcludingInfo:(id)arg1 ;
-(unsigned long long)infoCount;
-(unsigned long long)unlockedInfoCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSSet *)infos;
@end

