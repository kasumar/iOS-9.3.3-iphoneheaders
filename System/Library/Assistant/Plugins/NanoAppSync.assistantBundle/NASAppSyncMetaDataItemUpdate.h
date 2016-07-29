/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <NanoAppSync/NASAppSyncMetaDataItem.h>

@class NASAppSyncAnchor, NARApplication, NSString;

@interface NASAppSyncMetaDataItemUpdate : NSObject <NASAppSyncMetaDataItem> {

	NASAppSyncAnchor* _anchor;
	NARApplication* _application;
	NSString* _appId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appId;                       //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
-(id)initWithApplication:(id)arg1 anchor:(id)arg2 ;
-(id)localizedInfoValuesForKey:(id)arg1 ;
-(id)scrapeAppInfo;
-(BOOL)isMetaDataItemUpdate;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NASAppSyncAnchor *)anchor;
-(void)_validate;
-(NSString *)appId;
@end

