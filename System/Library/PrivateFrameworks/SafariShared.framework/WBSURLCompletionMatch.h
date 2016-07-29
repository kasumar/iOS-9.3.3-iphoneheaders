/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class NSString;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {

	long long _matchLocation;

}

@property (nonatomic,readonly) long long matchLocation;                        //@synthesize matchLocation=_matchLocation - In the implementation block
@property (nonatomic,readonly) BOOL matchLocationIsInURL; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
+(long long)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(long long)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(NSString *)description;
-(id)title;
-(id)originalURLString;
-(NSString *)parsecDomainIdentifier;
-(id)initWithMatchLocation:(long long)arg1 ;
-(id)userVisibleURLString;
-(BOOL)isTopHit;
-(long long)matchLocation;
-(BOOL)matchLocationIsInURL;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end

