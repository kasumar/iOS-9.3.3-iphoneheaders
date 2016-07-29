/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUMediaPlayerItem, NSString, NSNumber;

@interface SUScriptMediaPlayerItem : SUScriptObject {

	SUMediaPlayerItem* _mediaItem;

}

@property (copy) NSString * backgroundImageURL; 
@property (copy) NSString * bookmarkIdentifier; 
@property (copy) NSString * initialOrientation; 
@property (retain) NSNumber * itemIdentifier; 
@property (copy) NSString * itemType; 
@property (retain) NSNumber * playableDuration; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
@property (copy) NSString * URL; 
+(id)webScriptNameForKey:(const char*)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)URL;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSNumber *)playableDuration;
-(NSString *)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(NSString *)arg1 ;
-(NSString *)initialOrientation;
-(void)setInitialOrientation:(NSString *)arg1 ;
-(void)setPlayableDuration:(NSNumber *)arg1 ;
-(id)copyNativeMediaPlayerItem;
-(NSNumber *)itemIdentifier;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)itemType;
-(void)setItemType:(NSString *)arg1 ;
-(void)setBackgroundImageURL:(NSString *)arg1 ;
-(NSString *)backgroundImageURL;
@end

