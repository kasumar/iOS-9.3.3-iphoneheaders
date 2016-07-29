/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIDonationStepViewController.h>
#import <libobjc.A.dylib/SKUIDonationConfigurationObserver.h>

@class SKUIGiftAmount, SKUIDonationResultView, NSString;

@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {

	SKUIGiftAmount* _donationAmount;
	SKUIDonationResultView* _resultView;

}

@property (nonatomic,copy) SKUIGiftAmount * donationAmount;              //@synthesize donationAmount=_donationAmount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)_doneButtonAction:(id)arg1 ;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(void)setDonationAmount:(SKUIGiftAmount *)arg1 ;
-(void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2 ;
-(SKUIGiftAmount *)donationAmount;
@end

