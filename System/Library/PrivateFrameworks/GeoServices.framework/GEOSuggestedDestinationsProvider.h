/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface GEOSuggestedDestinationsProvider : NSObject {

	NSArray* _suggestions;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(NSArray *)suggestions;
-(void)stopMonitoringSuggestions;
-(void)startMonitoringSuggestionsWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)updateSuggestions:(id)arg1 ;
@end

