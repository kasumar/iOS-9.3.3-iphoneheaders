/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@interface ABAnyValuePredicate : ABPredicate {

	int _property;

}

@property (assign,nonatomic) int property;              //@synthesize property=_property - In the implementation block
-(id)init;
-(BOOL)isValid;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(id)queryGroupByProperties;
-(void)setProperty:(int)arg1 ;
-(int)property;
@end

