/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/AEUserPublishingLookUpRequest.h>

@protocol AEUserPublishingLookUpRequest <NSObject>
@required
+(id)resultsDictionaryFromLookUpResponse:(id)arg1;
+(BOOL)isEnabled;
-(id)initWithAdamIDs:(id)arg1 keyProfile:(id)arg2;
-(void)cancel;
-(BOOL)startWithLookupBlock:(/*^block*/id)arg1;

@end


@class SSLookupRequest, NSString;

@interface AEUserPublishingLookUpRequest : NSObject <AEUserPublishingLookUpRequest> {

	SSLookupRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyProfileFromAEKeyProfile:(id)arg1 ;
+(id)resultsDictionaryFromLookUpResponse:(id)arg1 ;
+(BOOL)isEnabled;
-(id)initWithAdamIDs:(id)arg1 keyProfile:(id)arg2 ;
-(void)cancel;
-(BOOL)startWithLookupBlock:(/*^block*/id)arg1 ;
@end

