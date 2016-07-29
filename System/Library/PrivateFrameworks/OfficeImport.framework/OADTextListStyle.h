/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;
	NSString* mLanguage;

}

@property (nonatomic,retain) NSString * language; 
+(id)defaultObject;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)propertiesForListLevel:(unsigned long long)arg1 ;
-(id)defaultProperties;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flatten;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2 ;
-(void)enumerateParagraphPropertiesUsingBlock:(/*^block*/id)arg1 ;
@end

