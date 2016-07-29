/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
@class NSString, NSDictionary;

@interface PKPaymentSetupField : NSObject {

	id<NSObject><NSCopying> _currentValue;
	BOOL _currentValueFromCameraCapture;
	BOOL _requiresSecureSubmission;
	NSString* _identifier;
	NSString* _localizedDisplayName;
	NSString* _localizedPlaceholder;
	NSString* _displayFormat;
	NSString* _defaultValue;
	NSString* _submissionKey;
	NSString* _submissionDestination;
	NSDictionary* _rawConfigurationDictionary;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long fieldType; 
@property (nonatomic,copy) NSString * localizedDisplayName;                                                          //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * compactLocalizedDisplayName; 
@property (nonatomic,copy) NSString * localizedPlaceholder;                                                          //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * displayFormat;                                                                 //@synthesize displayFormat=_displayFormat - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> currentValue;                                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,getter=isCurrentValueFromCameraCapture,nonatomic) BOOL currentValueFromCameraCapture;              //@synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture - In the implementation block
@property (nonatomic,copy) NSString * submissionKey;                                                                 //@synthesize submissionKey=_submissionKey - In the implementation block
@property (nonatomic,copy) NSString * submissionDestination;                                                         //@synthesize submissionDestination=_submissionDestination - In the implementation block
@property (assign,nonatomic) BOOL requiresSecureSubmission;                                                          //@synthesize requiresSecureSubmission=_requiresSecureSubmission - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rawConfigurationDictionary;                                       //@synthesize rawConfigurationDictionary=_rawConfigurationDictionary - In the implementation block
@property (getter=isBuiltIn,nonatomic,readonly) BOOL builtIn; 
+(id)newRandomlyGeneratedField;
+(id)sampleCustomPaymentSetupFields;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2 ;
+(Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)displayString;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(id<NSObject><NSCopying>)currentValue;
-(void)setCurrentValue:(id<NSObject><NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(void)setSubmissionKey:(NSString *)arg1 ;
-(void)setSubmissionDestination:(NSString *)arg1 ;
-(void)_setLocalizedDisplayName:(id)arg1 ;
-(void)setDisplayFormat:(NSString *)arg1 ;
-(void)setRequiresSecureSubmission:(BOOL)arg1 ;
-(void)noteCurrentValueChanged;
-(BOOL)isBuiltIn;
-(void)setCurrentValueFromCameraCapture:(BOOL)arg1 ;
-(id)textFieldObject;
-(NSString *)displayFormat;
-(BOOL)isFieldTypeLabel;
-(BOOL)isCurrentValueFromCameraCapture;
-(NSString *)compactLocalizedDisplayName;
-(NSString *)localizedDisplayName;
-(NSString *)localizedPlaceholder;
-(BOOL)isFieldTypeText;
-(BOOL)isFieldTypeDate;
-(id)dateFieldObject;
-(id)labelFieldObject;
-(NSDictionary *)rawConfigurationDictionary;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(NSString *)submissionDestination;
-(BOOL)requiresSecureSubmission;
-(NSString *)submissionKey;
-(id)submissionString;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(unsigned long long)fieldType;
@end

