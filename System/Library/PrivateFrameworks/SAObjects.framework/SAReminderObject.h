/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSArray, SAReminderRecurrence, SAReminderListObject, SAReminderTrigger;

@interface SAReminderObject : SADomainObject

@property (nonatomic,copy) NSString * alternateSubject; 
@property (assign,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSString * dueDateTimeZoneId; 
@property (assign,nonatomic) BOOL important; 
@property (nonatomic,copy) NSArray * lists; 
@property (nonatomic,retain) id<SAReminderPayload> payload; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) SAReminderListObject * toList; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)completed;
-(id<SAReminderPayload>)payload;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(id)groupIdentifier;
-(SAReminderRecurrence *)recurrence;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(BOOL)important;
-(void)setLists:(NSArray *)arg1 ;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
-(SAReminderTrigger *)trigger;
-(SAReminderListObject *)toList;
-(void)setToList:(SAReminderListObject *)arg1 ;
-(NSDate *)dueDate;
-(id)encodedClassName;
-(NSArray *)lists;
@end

