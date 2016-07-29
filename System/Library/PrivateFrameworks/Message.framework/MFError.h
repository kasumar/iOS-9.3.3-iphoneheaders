/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@class NSMutableDictionary;

@interface MFError : NSError {

	NSMutableDictionary* _moreUserInfo;

}
+(id)errorWithException:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
-(void)dealloc;
-(id)localizedDescription;
-(id)userInfo;
-(id)recoveryAttempter;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setMoreInfo:(id)arg1 ;
-(id)mf_moreInfo;
-(void)useGenericDescription:(id)arg1 ;
-(void)setShortDescription:(id)arg1 ;
-(id)mf_shortDescription;
@end

