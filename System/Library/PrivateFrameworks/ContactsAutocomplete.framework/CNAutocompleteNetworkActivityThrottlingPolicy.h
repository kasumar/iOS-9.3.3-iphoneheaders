/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteNetworkActivityPolicy.h>

@class NSString;

@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject <CNAutocompleteNetworkActivityPolicy> {

	unsigned long long _lengthOfString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithString:(id)arg1 ;
-(BOOL)shouldSearchServers;
-(double)delayBeforeBeginningNetworkActivity;
@end

