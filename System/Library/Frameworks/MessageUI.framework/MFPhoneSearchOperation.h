/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/_MFAddressBookPropertySearchOperation.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>

@class NSString;

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate> {

	CFStringRef _countryCode;
	CFArrayRef _uids;
	CFArrayRef _addresses;
	CFArrayRef _identifiers;
	NSString* _searchTerm;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)property;
-(void)dealloc;
-(CFArrayRef)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const _CFArray*)arg2 identifiers:(const _CFArray*)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
@end

