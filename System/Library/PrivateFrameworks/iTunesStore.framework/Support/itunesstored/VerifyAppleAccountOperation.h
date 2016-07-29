/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ACAccountCredential, NSString;

@interface VerifyAppleAccountOperation : ISOperation {

	ACAccountCredential* _credential;
	NSString* _username;

}

@property (readonly) ACAccountCredential * credential; 
@property (readonly) NSString * username; 
-(id)initWithUsername:(id)arg1 credential:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(ACAccountCredential *)credential;
-(NSString *)username;
@end

