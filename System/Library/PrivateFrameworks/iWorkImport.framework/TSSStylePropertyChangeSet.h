/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKSosBase.h>

@interface TSSStylePropertyChangeSet : TSKSosBase
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
-(id)p_variationPropertyMapFromStyle:(id)arg1 withPropertyMap:(id)arg2 ;
-(id)variationPropertyMapFromParentStyle:(id)arg1 ;
-(id)variationPropertyMapFromStyle:(id)arg1 ;
-(BOOL)isEqualToChangeSet:(id)arg1 ;
-(id)collectUndoForStyle:(id)arg1 ;
-(id)collectUnset;
-(id)variationStyleFrom:(id)arg1 inStylesheet:(id)arg2 ;
-(id)changedPropertyPaths;
-(BOOL)isEmptyChangeSet;
-(id)propertyChangeFilteredByProperties:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

