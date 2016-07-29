/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindowLayoutStrategy.h>

@protocol SBStarkSessionConfiguring;
@class NSString;

@interface SBCarWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy> {

	id<SBStarkSessionConfiguring> _configuration;
	unsigned long long _layout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)statusBarEdgeInsetsForConfiguration:(id)arg1 ;
+(id)strategyWithConfiguration:(id)arg1 layout:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 layout:(unsigned long long)arg2 ;
-(BOOL)_isLayoutBoundsOnly;
-(CGRect)frameForWindow:(id)arg1 ;
-(BOOL)shouldClipForWindow:(id)arg1 ;
@end

