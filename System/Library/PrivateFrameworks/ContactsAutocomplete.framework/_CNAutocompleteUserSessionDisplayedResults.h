/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject {

	BOOL _ignored;
	BOOL _containsDuetResults;
	CNAutocompleteFetchRequest* _request;
	NSMutableDictionary* _datesByBatchIndexes;

}

@property (nonatomic,readonly) CNAutocompleteFetchRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * datesByBatchIndexes;              //@synthesize datesByBatchIndexes=_datesByBatchIndexes - In the implementation block
@property (assign,nonatomic) BOOL ignored;                                           //@synthesize ignored=_ignored - In the implementation block
@property (assign,nonatomic) BOOL containsDuetResults;                               //@synthesize containsDuetResults=_containsDuetResults - In the implementation block
-(CNAutocompleteFetchRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)relevantForRequest:(id)arg1 ;
-(BOOL)ignored;
-(void)setIgnored:(BOOL)arg1 ;
-(NSMutableDictionary *)datesByBatchIndexes;
-(void)setContainsDuetResults:(BOOL)arg1 ;
-(void)didReceiveBatch:(unsigned long long)arg1 ;
-(BOOL)containsDuetResults;
-(void)setDatesByBatchIndexes:(NSMutableDictionary *)arg1 ;
@end

