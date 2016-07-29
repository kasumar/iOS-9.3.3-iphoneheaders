/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(void)removePass:(id)arg1;
-(id)passWithUniqueID:(id)arg1;
-(BOOL)canAddPaymentPass;
-(id)paymentPasses;

@end

