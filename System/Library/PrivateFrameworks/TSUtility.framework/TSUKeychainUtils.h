/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUKeychainUtils : NSObject
+(BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 error:(id*)arg7 ;
+(BOOL)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 error:(id*)arg4 ;
+(BOOL)removeGenericItem:(id)arg1 error:(id*)arg2 ;
+(BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 error:(id*)arg6 ;
+(BOOL)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 error:(id*)arg3 ;
@end

