/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString;

@interface MFRecentsSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _queryOptions;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 queryOptions:(unsigned long long)arg8 ;
-(void)dealloc;
-(unsigned long long)type;
-(void)main;
@end

