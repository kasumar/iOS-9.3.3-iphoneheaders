/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {

	TSSStyle* mStyle;
	int mProperty;
	TSKAccessController* mAccessController;

}
-(id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3 ;
-(void)warm;
-(void)main;
@end
