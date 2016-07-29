/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Stocks.siriUIBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <AcousticId/SiriUISnippetPlugin.h>

@class UITableView, UIButton, NSArray, StocksAssistantStockDetailCell, SiriUIReusableFooterView, NSString;

@interface StocksAssistantStockSnippetController : SiriUISnippetViewController <UITableViewDelegate, UITableViewDataSource, SiriUISnippetPlugin> {

	UITableView* _tableView;
	UIButton* _attributionButton;
	NSArray* _stocks;
	NSArray* _requestTypes;
	StocksAssistantStockDetailCell* _singleStockCell;
	BOOL _isCompare;
	SiriUIReusableFooterView* _footerView;
	unsigned long long _requestType;

}

@property (assign,nonatomic) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)infoTypeFromRequestType:(id)arg1 ;
-(void)openStock:(id)arg1 ;
-(void)openStockWebsite:(id)arg1 ;
-(void)dealloc;
-(double)rowHeight;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setRequestType:(unsigned long long)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(unsigned long long)requestType;
-(double)desiredHeightForFooterView;
-(void)configureReusableFooterView:(id)arg1 ;
-(double)desiredHeight;
@end

