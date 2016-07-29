/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class KNSlideCollectionSelection, NSString, TSKSelection;

@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection> {

	KNSlideCollectionSelection* mSelection;

}

@property (nonatomic,readonly) KNSlideCollectionSelection * slideCollectionSelection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSelection * selection; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(KNSlideCollectionSelection *)slideCollectionSelection;
-(void)dealloc;
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

