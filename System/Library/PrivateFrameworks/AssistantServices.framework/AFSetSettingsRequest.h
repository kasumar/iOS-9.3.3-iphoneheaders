/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest {

	NSArray* _settings;
	BOOL _applyChanges;

}

@property (nonatomic,copy) NSArray * settings;               //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL applyChanges;              //@synthesize applyChanges=_applyChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)settings;
-(id)createResponse;
-(id)createResponseWithSettingChanges:(id)arg1 ;
-(void)_setSettings:(id)arg1 ;
-(BOOL)applyChanges;
-(void)_setApplyChanges:(BOOL)arg1 ;
@end

