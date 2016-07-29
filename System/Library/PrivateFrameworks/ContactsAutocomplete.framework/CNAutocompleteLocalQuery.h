/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNAutocompleteLocalQueryDelegate;
@class CNAutocompleteFetchRequest, CNContactStore, NSString;

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable> {

	CNAutocompleteFetchRequest* _request;
	CNContactStore* _contactStore;
	CNContactStore* _contactFetcherStore;
	id<CNAutocompleteLocalQueryDelegate> _delegate;

}

@property (retain) CNAutocompleteFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (retain) CNContactStore * contactFetcherStore;              //@synthesize contactFetcherStore=_contactFetcherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithDelegate:(id)arg1 ;
+(id)peopleQuery;
+(id)groupsQuery;
-(void)cancel;
-(CNAutocompleteFetchRequest *)request;
-(id)run;
-(void)setRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(CNContactStore *)contactStore;
-(id)fetchResults;
-(id)searchableProperties;
-(id)makeResultFactory;
-(id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

