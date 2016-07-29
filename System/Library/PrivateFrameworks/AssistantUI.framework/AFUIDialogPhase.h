/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFUIDialogPhase : NSObject <NSSecureCoding> {

	long long _type;

}

@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
@property (getter=isExpository,nonatomic,readonly) BOOL expository; 
@property (getter=isConfirmationDialogPhase,nonatomic,readonly) BOOL confirmationDialogPhase; 
@property (getter=isReflectionDialogPhase,nonatomic,readonly) BOOL reflectionDialogPhase; 
@property (getter=isClarificationDialogPhase,nonatomic,readonly) BOOL clarificationDialogPhase; 
@property (getter=isConfirmedDialogPhase,nonatomic,readonly) BOOL confirmedDialogPhase; 
@property (getter=isCancelledDialogPhase,nonatomic,readonly) BOOL cancelledDialogPhase; 
@property (getter=isUserRequestDialogPhase,nonatomic,readonly) BOOL userRequestDialogPhase; 
@property (getter=isErrorDialogPhase,nonatomic,readonly) BOOL errorDialogPhase; 
@property (getter=isCompletionDialogPhase,nonatomic,readonly) BOOL completionDialogPhase; 
@property (getter=isSummaryDialogPhase,nonatomic,readonly) BOOL summaryDialogPhase; 
@property (nonatomic,readonly) NSString * aceDialogPhaseValue; 
@property (getter=_type,nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)acknowledgementDialogPhase;
+(id)reflectionDialogPhase;
+(id)statusDialogPhase;
+(id)clarificationDialogPhase;
+(id)summaryDialogPhase;
+(id)confirmationDialogPhase;
+(id)completionDialogPhase;
+(id)errorDialogPhase;
+(id)confirmedDialogPhase;
+(id)cancelledDialogPhase;
+(id)_dialogPhaseWithType:(long long)arg1 ;
+(id)userRequestDialogPhase;
+(id)dialogPhaseForAceDialogPhase:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)_type;
-(id)_initWithType:(long long)arg1 ;
-(BOOL)isReflectionDialogPhase;
-(BOOL)isEqualToDialogPhase:(id)arg1 ;
-(NSString *)aceDialogPhaseValue;
-(BOOL)replacesPreviousSnippetContents;
-(BOOL)isExpository;
-(BOOL)isConfirmationDialogPhase;
-(BOOL)isClarificationDialogPhase;
-(BOOL)isConfirmedDialogPhase;
-(BOOL)isCancelledDialogPhase;
-(BOOL)isUserRequestDialogPhase;
-(BOOL)isErrorDialogPhase;
-(BOOL)isCompletionDialogPhase;
-(BOOL)isSummaryDialogPhase;
-(BOOL)isTemporary;
@end

