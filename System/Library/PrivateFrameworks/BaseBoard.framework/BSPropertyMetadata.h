/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSPropertyMetadata : NSObject {

	char _type;
	NSString* _typeString;
	Class _classType;
	NSString* _getterName;
	NSString* _setterName;
	NSString* _name;
	NSString* _defaultKey;
	id _defaultValue;
	unsigned long long _options;

}

@property (assign,nonatomic) char type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSString * typeString;                           //@synthesize typeString=_typeString - In the implementation block
@property (getter=isNumber,nonatomic,readonly) BOOL number; 
@property (assign,nonatomic) Class classType;                                 //@synthesize classType=_classType - In the implementation block
@property (nonatomic,copy) NSString * getterName;                             //@synthesize getterName=_getterName - In the implementation block
@property (nonatomic,copy) NSString * setterName;                             //@synthesize setterName=_setterName - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultKey;                             //@synthesize defaultKey=_defaultKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                                 //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL synchronizeOnSet; 
@property (nonatomic,readonly) BOOL removeIfSettingDefaultValue; 
@property (nonatomic,readonly) BOOL removeIfCollectionSetEmpty; 
-(void)setDefaultKey:(NSString *)arg1 ;
-(NSString *)defaultKey;
-(NSString *)getterName;
-(void)setGetterName:(NSString *)arg1 ;
-(void)setSetterName:(NSString *)arg1 ;
-(void)setTypeString:(NSString *)arg1 ;
-(void)setClassType:(Class)arg1 ;
-(Class)classType;
-(BOOL)removeIfSettingDefaultValue;
-(BOOL)synchronizeOnSet;
-(BOOL)removeIfCollectionSetEmpty;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(char)arg1 ;
-(char)type;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(NSString *)setterName;
-(BOOL)isNumber;
-(NSString *)typeString;
@end

