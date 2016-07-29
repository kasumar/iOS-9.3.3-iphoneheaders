/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObject, NSString;

@interface EKObjectRelation : NSObject {

	EKObject* _owner;
	NSString* _relationName;
	BOOL _dirty;
	BOOL _loaded;
	NSString* _inverseName;

}

@property (nonatomic,readonly) EKObject * owner;                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSString * relationName;              //@synthesize relationName=_relationName - In the implementation block
@property (nonatomic,readonly) NSString * inverseName;               //@synthesize inverseName=_inverseName - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(EKObject *)owner;
-(id)committedValue;
-(void)relatedObjectDidChange;
-(void)updatePersistentObject;
-(void)didCommit;
-(id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 ;
-(NSString *)relationName;
-(NSString *)inverseName;
-(BOOL)isWeak;
-(void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)rollback;
-(BOOL)isDirty;
-(void)refresh;
-(BOOL)validate:(id*)arg1 ;
@end

