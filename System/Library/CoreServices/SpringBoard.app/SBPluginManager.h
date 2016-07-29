/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface SBPluginManager : NSObject {

	NSString* _pluginsDirectory;
	NSMutableDictionary* _plugins;

}
+(id)sharedInstance;
-(void)loadAllLaunchPlugins;
-(id)springBoardPluginsDirectory;
-(Class)loadPluginBundle:(id)arg1 ;
-(Class)loadPluginNamed:(id)arg1 ;
-(id)init;
@end

