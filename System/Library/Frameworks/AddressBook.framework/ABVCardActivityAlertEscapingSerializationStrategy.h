/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABVCardActivityAlertAbstractSerializationStrategy.h>

@class NSString;

@interface ABVCardActivityAlertEscapingSerializationStrategy : NSObject <ABVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializeString:(id)arg1 ;
+(BOOL)strategyWouldAlterString:(id)arg1 ;
+(id)charactersToTriggerStrategy;
+(id)regex;
@end

