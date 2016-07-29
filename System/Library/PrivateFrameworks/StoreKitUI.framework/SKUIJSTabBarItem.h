/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTabBarItem.h>
@class NSString, IKJSNavigationDocument;


@protocol SKUIJSTabBarItem <JSExport>
@property (nonatomic,retain) NSString * badgeValue; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,readonly) NSString * rootURL; 
@property (nonatomic,readonly) NSString * title; 
@required
-(NSString *)identifier;
-(NSString *)title;
-(void)setBadgeValue:(id)arg1;
-(NSString *)badgeValue;
-(NSString *)rootURL;
-(IKJSNavigationDocument *)navigationDocument;

@end


@class NSString, IKJSNavigationDocument, JSManagedValue, IKJSObject, SKUITabBarItem;

@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem> {

	JSManagedValue* _managedNavigationDocument;
	IKJSNavigationDocument* _navigationDocument;
	IKJSObject* _owner;
	SKUITabBarItem* _tabBarItem;

}

@property (nonatomic,readonly) SKUITabBarItem * tabBarItem;                              //@synthesize tabBarItem=_tabBarItem - In the implementation block
@property (nonatomic,retain) NSString * badgeValue; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,readonly) NSString * rootURL; 
@property (nonatomic,readonly) NSString * title; 
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)title;
-(SKUITabBarItem *)tabBarItem;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(NSString *)rootURL;
-(IKJSNavigationDocument *)navigationDocument;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4 ;
@end

