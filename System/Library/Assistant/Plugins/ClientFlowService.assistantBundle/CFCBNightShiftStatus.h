/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSString, CFCBNightShiftSchedule;

@interface CFCBNightShiftStatus : SADomainCommand <SAAceSerializable>

@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * nightShiftMode; 
@property (nonatomic,retain) CFCBNightShiftSchedule * nightShiftSchedule; 
@property (assign,nonatomic) BOOL sunSchedulePermitted; 
@property (assign,nonatomic) BOOL supported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nightShiftStatus;
+(id)nightShiftStatusWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setNightShiftSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(void)setSunSchedulePermitted:(BOOL)arg1 ;
-(NSString *)nightShiftMode;
-(void)setNightShiftMode:(NSString *)arg1 ;
-(BOOL)sunSchedulePermitted;
-(CFCBNightShiftSchedule *)nightShiftSchedule;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setSupported:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)supported;
@end

