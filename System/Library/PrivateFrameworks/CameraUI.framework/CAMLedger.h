/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMLedger : NSObject {

	ledger_entry_info* _ledgerEntries;
	long long _ledgerCount;
	int _footprintLedgerIndex;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(long long)footprint;
@end

