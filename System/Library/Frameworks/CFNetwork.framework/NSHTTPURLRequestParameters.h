/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject {

	NSString* method;
	NSMutableDictionary* fields;
	NSArray* extraCookies;
	NSData* data;
	unsigned long long pageNotFoundCacheLifetime;
	BOOL shouldHandleCookies;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

