/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _WBUDynamicMeCard : NSObject {

	void* _me;
	NSMutableArray* _blocksPendingMeCard;

}
+(int)_ABPropertyIDForString:(id)arg1 ;
+(BOOL)isProxyProperty:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_addressBookChanged:(id)arg1 ;
-(id)valueForProperty:(id)arg1 isMultiValue:(BOOL*)arg2 ;
-(id)valueForProxyProperty:(id)arg1 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
@end

