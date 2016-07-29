/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpBookController, NSDictionary;

@interface HLPHelpSearchIndexController : HLPRemoteDataController {

	HLPHelpBookController* _helpBookController;
	NSDictionary* _searchIndex;

}

@property (nonatomic,retain) HLPHelpBookController * helpBookController;              //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) NSDictionary * searchIndex;                              //@synthesize searchIndex=_searchIndex - In the implementation block
-(NSDictionary *)searchIndex;
-(void)setSearchIndex:(NSDictionary *)arg1 ;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id*)arg3 ;
-(HLPHelpBookController *)helpBookController;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
-(id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2 ;
@end

