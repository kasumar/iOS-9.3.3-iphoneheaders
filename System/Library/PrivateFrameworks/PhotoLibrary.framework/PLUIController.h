/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class UITransitionView, NSDictionary;

@interface PLUIController : NSObject {

	id _delegate;
	UITransitionView* _fullScreenTransitionView;
	NSDictionary* _configuration;

}
+(id)sharedInstance;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setConfiguration:(id)arg1 ;
-(id)configuration;
-(id)contentViewWithFrame:(CGRect)arg1 ;
@end

