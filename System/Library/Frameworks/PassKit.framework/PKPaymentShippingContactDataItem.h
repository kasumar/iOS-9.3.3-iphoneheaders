/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSString * phone; 
@property (nonatomic,readonly) NSString * name; 
+(long long)dataType;
-(NSString *)name;
-(NSString *)email;
-(NSString *)phone;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

