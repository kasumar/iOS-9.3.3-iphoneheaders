/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface AppReceiptHandleInvalidOperation : ISOperation {

	/*^block*/id _resultsBlock;
	NSString* _bundleIdentifier;
	NSString* _clientIdentifierHeader;
	NSString* _userAgent;

}

@property (nonatomic,retain) NSString * clientIdentifierHeader; 
@property (nonatomic,retain) NSString * userAgent; 
-(void)setResultsBlock:(/*^block*/id)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)dealloc;
-(void)run;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
@end

