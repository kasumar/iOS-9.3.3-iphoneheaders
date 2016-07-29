/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * confidenceScore; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * originalText; 
@property (nonatomic,copy) NSString * recognitionStability; 
@property (assign,nonatomic) BOOL removeSpaceAfter; 
@property (assign,nonatomic) BOOL removeSpaceBefore; 
@property (nonatomic,copy) NSNumber * silenceStartTime; 
@property (nonatomic,copy) NSNumber * startTime; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)token;
+(id)tokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechToken;
-(void)setStartTime:(NSNumber *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)originalText;
-(NSNumber *)startTime;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(NSNumber *)endTime;
-(void)setEndTime:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)confidenceScore;
-(void)setConfidenceScore:(NSNumber *)arg1 ;
-(void)setOriginalText:(NSString *)arg1 ;
-(NSString *)recognitionStability;
-(void)setRecognitionStability:(NSString *)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(NSNumber *)silenceStartTime;
-(void)setSilenceStartTime:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

