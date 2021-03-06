/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAccountingDependencyManager <NSObject>
@required
-(id)ownerIDsForDependency:(id)arg1;
-(id)lastOwnerForOwnerID:(id)arg1;
-(void)startObservingOwnerID:(id)arg1 forDependency:(id)arg2;
-(void)stopObservingOwnerID:(id)arg1 forDependency:(id)arg2;
-(void)canFreeDependency:(id)arg1;

@end

