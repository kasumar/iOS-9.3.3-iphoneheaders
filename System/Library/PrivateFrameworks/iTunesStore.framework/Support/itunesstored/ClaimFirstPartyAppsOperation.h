/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface ClaimFirstPartyAppsOperation : ISOperation {

	NSArray* _claimedApplications;

}

@property (readonly) NSArray * claimedApplications; 
@property (readonly) NSArray * claimedBundleIdentifiers; 
-(NSArray *)claimedBundleIdentifiers;
-(NSArray *)claimedApplications;
-(id)_copyUnclaimedSystemAppDictionaries;
-(id)_writeMetadataPlistsWithUnclaimedApps:(id)arg1 response:(id)arg2 ;
-(id)_homeDirectoryURL;
-(id)_systemMetadataPlistDirectory;
-(id)claimedApplicationForBundleIdentifier:(id)arg1 ;
-(void)run;
@end

