/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceCompletionTicket.h>

@class GEOMapServiceTraits, NSDictionary, GEOSearchRequest, NSString;

@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket> {

	GEOSearchRequest* _searchRequest;
	GEOMapServiceTraits* _traits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultMuid:(unsigned long long)arg2 ;
-(BOOL)isRapEnabled;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)matchesFragment:(id)arg1 ;
-(void)applyToSuggestionList:(id)arg1 ;
-(NSDictionary *)responseUserInfo;
-(id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2 ;
@end

