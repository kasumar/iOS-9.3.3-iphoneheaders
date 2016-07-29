/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPComponentDelegate <NSObject>
@required
-(id)objectForIdentifier:(long long)arg1;
-(void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
-(BOOL)isActive;

@end

