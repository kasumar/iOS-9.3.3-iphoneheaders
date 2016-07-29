/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PKPassPaymentSummaryCellDelegate.h>

@protocol PKPassPaymentSummaryViewDelegate;
@class NSNumberFormatter, UITableView, PKPaymentPass, PKPaymentTransaction, PKPaymentMessage, NSString;

@interface PKPassPaymentSummaryView : UIView <UITableViewDataSource, UITableViewDelegate, PKPassPaymentSummaryCellDelegate> {

	NSNumberFormatter* _numberFormatter;
	UITableView* _tableView;
	BOOL _deepLinkingEnabled;
	PKPaymentPass* _pass;
	PKPaymentTransaction* _transaction;
	PKPaymentMessage* _message;
	NSString* _transactionAppLaunchToken;
	NSString* _messageAppLaunchToken;
	id<PKPassPaymentSummaryViewDelegate> _delegate;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * transaction;                       //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKPaymentMessage * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * transactionAppLaunchToken;                     //@synthesize transactionAppLaunchToken=_transactionAppLaunchToken - In the implementation block
@property (nonatomic,readonly) NSString * messageAppLaunchToken;                         //@synthesize messageAppLaunchToken=_messageAppLaunchToken - In the implementation block
@property (assign,nonatomic) id<PKPassPaymentSummaryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKPassPaymentSummaryViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<PKPassPaymentSummaryViewDelegate>)delegate;
-(PKPaymentMessage *)message;
-(PKPaymentPass *)pass;
-(id)initWithPaymentPass:(id)arg1 ;
-(void)paymentSummaryCellDetailsButtonPressed:(id)arg1 ;
-(BOOL)_isSectionIndexOfTransaction:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forTransaction:(id)arg2 ;
-(BOOL)_isSectionIndexOfMessage:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forMessage:(id)arg2 ;
-(void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(BOOL)arg3 ;
-(void)_performAction:(long long)arg1 forSection:(long long)arg2 animated:(BOOL)arg3 ;
-(id)_primaryTextFromTransaction:(id)arg1 ;
-(id)_detailTextFromTransaction:(id)arg1 ;
-(id)_amountTextFromTransaction:(id)arg1 ;
-(id)_imageFromTransaction:(id)arg1 ;
-(void)setTransaction:(id)arg1 appLaunchToken:(id)arg2 animated:(BOOL)arg3 ;
-(long long)_sectionIndexOfTransaction;
-(long long)_sectionIndexOfMessage;
-(PKPaymentTransaction *)transaction;
-(NSString *)transactionAppLaunchToken;
-(NSString *)messageAppLaunchToken;
@end

