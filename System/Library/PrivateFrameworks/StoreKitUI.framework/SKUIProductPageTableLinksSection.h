/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIProductPageItem, SKUIColorScheme;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {

	NSMutableArray* _actions;
	SKUIProductPageItem* _item;
	NSMutableArray* _titles;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 askPermission:(BOOL)arg3 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end
