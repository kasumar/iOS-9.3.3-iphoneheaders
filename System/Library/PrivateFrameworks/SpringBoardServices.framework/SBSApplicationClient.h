/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@interface SBSApplicationClient : FBSSystemServiceFacilityClient
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchRemovabilityForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setRemovalAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

