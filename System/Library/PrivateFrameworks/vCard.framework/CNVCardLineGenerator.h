/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardLineFactory;
@class NSString;

@interface CNVCardLineGenerator : NSObject {

	NSString* _lineName;
	long long* _groupingCount;
	id<CNVCardLineFactory> _lineFactory;

}
+(id)emailGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)phoneGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)streetAddressGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)socialProfileGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)activityAlertGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)generatorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)dateComponentsGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)alternateDateComponentsGeneratorWithName:(id)arg1 groupingcount:(long long*)arg2 ;
+(id)instantMessagingGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
+(id)legacyInstantMessagingGeneratorWithName:(id)arg1 groupingCount:(long long*)arg2 ;
-(void)dealloc;
-(id)lineWithValue:(id)arg1 label:(id)arg2 ;
-(void)addPrimaryValueMarkerToLine:(id)arg1 ;
-(id)initWithName:(id)arg1 groupingCount:(long long*)arg2 ;
-(id)makeLineWithName:(id)arg1 value:(id)arg2 ;
-(id)standardLabelsForLabel:(id)arg1 ;
-(void)addStandardLabel:(id)arg1 toLine:(id)arg2 ;
-(void)addCustomLabel:(id)arg1 toLine:(id)arg2 ;
@end

