/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface BKSeriesItem : NSManagedObject

@property (nonatomic,retain) NSString * adamId; 
@property (nonatomic,retain) NSString * sortTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * sortAuthor; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSNumber * position; 
@property (nonatomic,retain) NSNumber * popularity; 
@property (nonatomic,retain) NSString * seriesAdamId; 
@property (nonatomic,retain) NSString * seriesTitle; 
@property (nonatomic,retain) NSNumber * isExplicit; 
@property (nonatomic,retain) NSNumber * isContainer; 
@property (nonatomic,retain) NSString * sequenceDisplayName; 
@property (nonatomic,retain) NSString * genre; 
+(id)predicateForAllItemsAndContainersInSeries:(id)arg1 ;
+(id)insertSeriesContainerWithSeriesAdamId:(id)arg1 intoManagedObjectContext:(id)arg2 ;
+(id)predicateForAllSeriesItems;
+(id)predicateForAllItemsAndContainerWithAdamIdInList:(id)arg1 ;
+(id)insertSeriesItemWithAdamId:(id)arg1 seriesAdamId:(id)arg2 intoManagedObjectContext:(id)arg3 ;
+(id)seriesItem;
+(id)predicateForItemWithAdamId:(id)arg1 ;
+(id)predicateForAllSeriesContainerItems;
+(id)predicateForContainerWithSeriesId:(id)arg1 ;
+(id)fetchRequest;
@end

