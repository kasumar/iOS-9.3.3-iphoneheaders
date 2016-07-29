/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUPropertySet, MPUChangeDetails, MPUSectionedCollection;

@interface MPUModelResponse : NSObject {

	BOOL _valid;
	MPUPropertySet* _deferredSectionProperties;
	MPUPropertySet* _deferredItemProperties;
	MPUChangeDetails* _changeDetails;
	MPUSectionedCollection* _results;
	MPUPropertySet* _requestedSectionProperties;
	MPUPropertySet* _requestedItemProperties;

}

@property (nonatomic,retain) MPUPropertySet * deferredSectionProperties;               //@synthesize deferredSectionProperties=_deferredSectionProperties - In the implementation block
@property (nonatomic,retain) MPUPropertySet * deferredItemProperties;                  //@synthesize deferredItemProperties=_deferredItemProperties - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) MPUChangeDetails * changeDetails;                         //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,copy) MPUSectionedCollection * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) MPUPropertySet * requestedSectionProperties;              //@synthesize requestedSectionProperties=_requestedSectionProperties - In the implementation block
@property (nonatomic,retain) MPUPropertySet * requestedItemProperties;                 //@synthesize requestedItemProperties=_requestedItemProperties - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(BOOL)isValid;
-(void)_invalidate;
-(MPUSectionedCollection *)results;
-(void)setResults:(MPUSectionedCollection *)arg1 ;
-(MPUPropertySet *)deferredSectionProperties;
-(void)setDeferredSectionProperties:(MPUPropertySet *)arg1 ;
-(MPUPropertySet *)deferredItemProperties;
-(void)setDeferredItemProperties:(MPUPropertySet *)arg1 ;
-(MPUPropertySet *)requestedSectionProperties;
-(void)setRequestedSectionProperties:(MPUPropertySet *)arg1 ;
-(MPUPropertySet *)requestedItemProperties;
-(void)setRequestedItemProperties:(MPUPropertySet *)arg1 ;
-(MPUChangeDetails *)changeDetails;
-(void)setChangeDetails:(MPUChangeDetails *)arg1 ;
@end

