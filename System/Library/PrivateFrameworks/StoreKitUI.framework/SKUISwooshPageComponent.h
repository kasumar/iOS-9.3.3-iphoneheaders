/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSString, NSURL;

@interface SKUISwooshPageComponent : SKUIPageComponent {

	NSArray* _bricks;
	long long _fcKind;
	NSArray* _lockups;
	SKUILockupStyle _lockupStyle;
	NSArray* _mediaComponents;
	long long _missingDataCount;
	NSString* _platformKeyProfile;
	long long _seeAllStyle;
	NSString* _seeAllTitle;
	NSURL* _seeAllURL;
	BOOL _showsIndexNumbers;
	BOOL _showsItemTitles;
	long long _swooshType;
	NSString* _title;

}

@property (nonatomic,readonly) long long seeAllStyle;                      //@synthesize seeAllStyle=_seeAllStyle - In the implementation block
@property (nonatomic,readonly) NSString * seeAllTitle;                     //@synthesize seeAllTitle=_seeAllTitle - In the implementation block
@property (nonatomic,readonly) NSURL * seeAllURL;                          //@synthesize seeAllURL=_seeAllURL - In the implementation block
@property (nonatomic,readonly) long long swooshType;                       //@synthesize swooshType=_swooshType - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * lockups;                          //@synthesize lockups=_lockups - In the implementation block
@property (nonatomic,readonly) SKUILockupStyle lockupStyle;                //@synthesize lockupStyle=_lockupStyle - In the implementation block
@property (nonatomic,readonly) NSString * platformKeyProfile;              //@synthesize platformKeyProfile=_platformKeyProfile - In the implementation block
@property (nonatomic,readonly) BOOL showsIndexNumbers;                     //@synthesize showsIndexNumbers=_showsIndexNumbers - In the implementation block
@property (nonatomic,readonly) NSArray * bricks;                           //@synthesize bricks=_bricks - In the implementation block
@property (nonatomic,readonly) BOOL showsBrickTitles; 
@property (nonatomic,readonly) NSArray * mediaComponents;                  //@synthesize mediaComponents=_mediaComponents - In the implementation block
@property (nonatomic,readonly) BOOL showsMediaTitles; 
-(NSString *)title;
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(long long)swooshType;
-(id)initWithRoomContext:(id)arg1 ;
-(id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(SKUILockupStyle)arg2 ;
-(SKUILockupStyle)lockupStyle;
-(BOOL)showsIndexNumbers;
-(NSArray *)bricks;
-(void)_updateBricksWithItems:(id)arg1 ;
-(BOOL)showsBrickTitles;
-(NSArray *)lockups;
-(NSString *)seeAllTitle;
-(long long)seeAllStyle;
-(NSURL *)seeAllURL;
-(id)initWithItemList:(id)arg1 ;
-(void)_updateLockupItemsWithLookupResponse:(id)arg1 ;
-(id)_updateLockupItemsWithItems:(id)arg1 ;
-(NSString *)platformKeyProfile;
-(id)initWithLockups:(id)arg1 swooshType:(long long)arg2 title:(id)arg3 ;
-(id)initWithRelatedContentContext:(id)arg1 ;
-(NSArray *)mediaComponents;
-(BOOL)showsMediaTitles;
-(void)_setSeeAllValuesWithLinkInfo:(id)arg1 ;
-(id)_brickItemsWithChildren:(id)arg1 customPageContext:(id)arg2 ;
-(id)_lockupsWithChildren:(id)arg1 context:(id)arg2 ;
-(id)_mediaComponentsWithChildren:(id)arg1 context:(id)arg2 ;
-(void)_reloadMissingDataCount;
-(id)_brickItemsWithChildren:(id)arg1 featuredPageContext:(id)arg2 ;
-(id)_lockupsWithChildren:(id)arg1 featuredPageContext:(id)arg2 ;
-(SKUILockupStyle)_lockupStyleWithLockups:(id)arg1 ;
-(void)_updateLockup:(id)arg1 withItem:(id)arg2 ;
-(BOOL)_isBrickAvailable:(id)arg1 withPageContext:(id)arg2 ;
-(unsigned long long)_defaultVisibleFieldsForItemKind:(long long)arg1 ;
-(id)_lockupWithItemIdentifier:(id)arg1 context:(id)arg2 ;
@end

