/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest

@property (nonatomic,readonly) CGSize minimumIconSize; 
@property (nonatomic,readonly) CGSize maximumIconSize; 
@property (nonatomic,copy,readonly) NSString * monogramTitle; 
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(NSString *)monogramTitle;
-(CGSize)minimumIconSize;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(CGSize)maximumIconSize;
@end

