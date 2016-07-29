/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CATProperty : NSObject {

	BOOL _readOnly;
	BOOL _nonAtomic;
	BOOL _weakReference;
	NSString* _name;
	NSString* _instanceVariableName;
	long long _type;
	Class _objectClass;
	long long _association;
	SEL _customGetterSelector;
	SEL _customSetterSelector;

}

@property (copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * instanceVariableName;                   //@synthesize instanceVariableName=_instanceVariableName - In the implementation block
@property (readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (readonly) Class objectClass;                                      //@synthesize objectClass=_objectClass - In the implementation block
@property (getter=isReadOnly,readonly) BOOL readOnly;                        //@synthesize readOnly=_readOnly - In the implementation block
@property (getter=isNonAtomic,readonly) BOOL nonAtomic;                      //@synthesize nonAtomic=_nonAtomic - In the implementation block
@property (readonly) long long association;                                  //@synthesize association=_association - In the implementation block
@property (readonly) SEL customGetterSelector;                               //@synthesize customGetterSelector=_customGetterSelector - In the implementation block
@property (readonly) SEL customSetterSelector;                               //@synthesize customSetterSelector=_customSetterSelector - In the implementation block
@property (getter=isWeakReference,readonly) BOOL weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
+(void)initialize;
+(id)propertiesForClass:(Class)arg1 ;
+(id)propertiesForProtocol:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(long long)type;
-(NSString *)instanceVariableName;
-(BOOL)isReadOnly;
-(Class)objectClass;
-(BOOL)isNonAtomic;
-(long long)association;
-(SEL)customGetterSelector;
-(SEL)customSetterSelector;
-(BOOL)isWeakReference;
-(id)initWithName:(const char*)arg1 attributes:(const char*)arg2 ;
@end

