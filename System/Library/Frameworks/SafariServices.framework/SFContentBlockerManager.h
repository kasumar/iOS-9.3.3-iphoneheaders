/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKUserContentController, NSArray;

@interface SFContentBlockerManager : NSObject {

	id _extensionMatchingContext;
	WKUserContentController* _userContentController;
	NSArray* _extensions;

}

@property (nonatomic,readonly) NSArray * extensions; 
@property (nonatomic,readonly) WKUserContentController * userContentController; 
+(id)sharedManager;
+(id)contentBlockerStore;
+(id)_contentBlockerLoaderConnection;
+(void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)extensions;
-(id)displayNameForExtension:(id)arg1 ;
-(void)reloadUserContentController;
-(void)beginContentBlockerDiscovery;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(WKUserContentController *)userContentController;
-(void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

