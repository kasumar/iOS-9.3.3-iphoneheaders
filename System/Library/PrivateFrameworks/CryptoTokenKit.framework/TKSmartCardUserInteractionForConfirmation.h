/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding> {

	BOOL _result;
	TKSmartCardSlot* _slot;

}

@property (assign) BOOL result;                         //@synthesize result=_result - In the implementation block
@property (__weak) TKSmartCardSlot * slot;              //@synthesize slot=_slot - In the implementation block
+(BOOL)supportsSecureCoding;
-(TKSmartCardSlot *)slot;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)result;
-(void)setResult:(BOOL)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
@end

