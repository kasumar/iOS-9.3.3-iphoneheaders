/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptFunction, SUActivity, WebScriptObject, NSString;

@interface SUScriptActivity : SUScriptObject {

	SUScriptFunction* _actionFunction;

}

@property (nonatomic,readonly) SUActivity * nativeActivity; 
@property (retain) WebScriptObject * actionFunction; 
@property (copy) NSString * activityTitle; 
@property (copy) NSString * activityType; 
@property (readonly) NSString * activityImageNameGiftAppStore; 
@property (readonly) NSString * activityImageNameGiftMusicStore; 
@property (readonly) NSString * activityImageNamePingAppStore; 
@property (readonly) NSString * activityImageNamePingMusicStore; 
@property (readonly) NSString * activityImageNameWishlistAppStore; 
@property (readonly) NSString * activityImageNameWishlistMusicStore; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(NSString *)activityType;
-(NSString *)activityTitle;
-(id)attributeKeys;
-(void)setActivityType:(NSString *)arg1 ;
-(SUActivity *)nativeActivity;
-(id)_nativeActivity;
-(void)setActivityTitle:(NSString *)arg1 ;
-(void)setActivityImageWithName:(id)arg1 ;
-(void)setActivityImageWithURL:(id)arg1 scale:(id)arg2 ;
-(WebScriptObject *)actionFunction;
-(void)setActionFunction:(WebScriptObject *)arg1 ;
-(NSString *)activityImageNameGiftAppStore;
-(NSString *)activityImageNameGiftMusicStore;
-(NSString *)activityImageNamePingAppStore;
-(NSString *)activityImageNamePingMusicStore;
-(NSString *)activityImageNameWishlistAppStore;
-(NSString *)activityImageNameWishlistMusicStore;
-(void)_performActionFunctionWithItems:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
@end

