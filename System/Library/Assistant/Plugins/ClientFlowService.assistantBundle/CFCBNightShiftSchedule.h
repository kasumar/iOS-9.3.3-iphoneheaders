/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class CFCBNightShiftTransitionTime, NSString;

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>

@property (nonatomic,retain) CFCBNightShiftTransitionTime * fromTime; 
@property (nonatomic,retain) CFCBNightShiftTransitionTime * toTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftSchedule;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(CFCBNightShiftTransitionTime *)toTime;
-(void)setFromTime:(CFCBNightShiftTransitionTime *)arg1 ;
-(CFCBNightShiftTransitionTime *)fromTime;
-(void)setToTime:(CFCBNightShiftTransitionTime *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
