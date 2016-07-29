/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BKSeriesDatabase, BKSeriesManager, NSDictionary, NSObject, BKSeriesDatabaseManagedObjectContext;

@interface BKSeriesManagerUpdater : NSObject {

	BOOL _finished;
	BKSeriesDatabase* _database;
	BKSeriesManager* _manager;
	NSDictionary* _formattedPrices;
	NSObject*<OS_dispatch_queue> _queue;
	BKSeriesDatabaseManagedObjectContext* _managedObjectContext;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) BKSeriesDatabase * database;                                              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic,__weak) BKSeriesManager * manager;                                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSDictionary * formattedPrices;                                           //@synthesize formattedPrices=_formattedPrices - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                                          //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BKSeriesDatabaseManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (copy) id completionBlock;                                                                   //@synthesize completionBlock=_completionBlock - In the implementation block
+(void)_populateItem:(id)arg1 withItemData:(id)arg2 position:(unsigned long long)arg3 seriesId:(id)arg4 sequenceDisplayLabel:(id)arg5 isContainer:(BOOL)arg6 seriesTitle:(id)arg7 ;
-(id)initWithManager:(id)arg1 database:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateSeriesAdamIds:(id)arg1 ;
-(void)updateAdamIDs:(id)arg1 forceCheck:(BOOL)arg2 ;
-(void)updateSeriesAdamIds:(id)arg1 ;
-(id)_filteredSeriesProfiles:(id)arg1 ;
-(void)_updateSeriesContainersWithSeriesIDs:(id)arg1 withProfiles:(id)arg2 ;
-(void)setFormattedPrices:(NSDictionary *)arg1 ;
-(void)_updateSeriesChildrenWithAdamIDs:(id)arg1 seriesProfiles:(id)arg2 childProfiles:(id)arg3 ;
-(NSDictionary *)formattedPrices;
-(void)updateAdamIDs:(id)arg1 ;
-(void)updateAndRecheckAdamID:(id)arg1 ;
-(void)_seriesCompleteUpdateSeriesAdamIds:(id)arg1 ;
-(BKSeriesManager *)manager;
-(void)cancel;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BKSeriesDatabaseManagedObjectContext *)managedObjectContext;
-(BOOL)isFinished;
-(void)finish;
-(void)setFinished:(BOOL)arg1 ;
-(void)setManagedObjectContext:(BKSeriesDatabaseManagedObjectContext *)arg1 ;
-(BKSeriesDatabase *)database;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDatabase:(BKSeriesDatabase *)arg1 ;
-(void)setManager:(BKSeriesManager *)arg1 ;
@end

