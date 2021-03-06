/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject {

	NSDictionary* _bundleDictionary;
	NSLock* _lock;

}

@property (copy,readonly) NSDictionary * bundleDictionary; 
-(void)dealloc;
-(id)init;
-(void)_invalidateLookupCache:(id)arg1 ;
-(void)_populateBundleDictionary;
-(id)_identifierForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)bundleDictionary;
-(id)itemIdentifierForBundleIdentifer:(id)arg1 ;
@end

