/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableSet, NSArray, UIImage, NSDate, BBSectionInfo, NSSet;

@interface SBBulletinListSection : NSObject {

	NSString* _sectionID;
	long long _sectionType;
	id _widget;
	NSMutableArray* _bulletins;
	NSMutableSet* _bulletinIDs;
	NSArray* _sortDescriptors;
	NSString* _displayName;
	UIImage* _iconImage;
	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	unsigned long long _messageNumberOfLines;
	BOOL _displaysCriticalBulletins;
	NSDate* _lastSortDate;
	NSMutableSet* _subsections;
	UIImage* _largeIconImage;
	BBSectionInfo* _sectionInfo;

}

@property (nonatomic,copy) NSString * sectionID;                                   //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSArray * bulletins;                                //@synthesize bulletins=_bulletins - In the implementation block
@property (nonatomic,retain) id widget;                                            //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                            //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                  //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * largeIconImage;                             //@synthesize largeIconImage=_largeIconImage - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                               //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                             //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) unsigned long long messageNumberOfLines;              //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (nonatomic,__weak,readonly) NSSet * subsectionIDs; 
@property (nonatomic,retain) BBSectionInfo * sectionInfo;                          //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(BOOL)isWidgetSection;
-(BOOL)isBulletinSection;
-(void)_updateWithSectionInfo:(id)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 forSubsectionID:(id)arg2 ;
-(void)setShowsMessagePreview:(BOOL)arg1 forSubsectionID:(id)arg2 ;
-(id)lastSortDate;
-(unsigned long long)_indexForNewBulletin:(id)arg1 ;
-(id)_sortDateForBulletin:(id)arg1 ;
-(unsigned long long)indexOfBulletinID:(id)arg1 ;
-(unsigned long long)_removeBulletin:(id)arg1 ;
-(void)setLargeIconImage:(UIImage *)arg1 ;
-(id)bulletinAtIndex:(unsigned long long)arg1 ;
-(id)bulletinWithBulletinID:(id)arg1 ;
-(id)_subsectionWithIDCreatingIfNecessary:(id)arg1 ;
-(BOOL)hasClearableBulletins;
-(void)updateWithSectionInfo:(id)arg1 ;
-(long long)compareSection:(id)arg1 forOrder:(long long)arg2 ;
-(unsigned long long)replaceBulletin:(id)arg1 withBulletin:(id)arg2 ;
-(BOOL)hasBulletinWithID:(id)arg1 ;
-(UIImage *)largeIconImage;
-(BOOL)showsBulletinIDInLockScreen:(id)arg1 ;
-(BOOL)showsBulletinsInSubsectionIDInLockScreen:(id)arg1 ;
-(BOOL)showsMessagePreviewForBulletinID:(id)arg1 ;
-(BOOL)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(UIImage *)iconImage;
-(NSArray *)sortDescriptors;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BBSectionInfo *)sectionInfo;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(NSSet *)subsectionIDs;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(BOOL)showsInLockScreen;
-(BOOL)displaysCriticalBulletins;
-(unsigned long long)bulletinCount;
-(unsigned long long)messageNumberOfLines;
-(id)initWithSectionInfo:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(NSString *)sectionID;
-(BOOL)showsMessagePreview;
-(id)widget;
-(void)setWidget:(id)arg1 ;
-(NSArray *)bulletins;
-(void)setSectionID:(NSString *)arg1 ;
-(unsigned long long)removeBulletin:(id)arg1 ;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)addBulletin:(id)arg1 ;
@end

