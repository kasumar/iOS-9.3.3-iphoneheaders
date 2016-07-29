/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteJoinClause : NSObject {

	Class _localEntityClass;
	Class _targetEntityClass;
	NSString* _joinAsName;
	NSString* _localReferenceProperty;
	NSString* _targetKeyProperty;
	long long _joinType;

}

@property (nonatomic,readonly) Class localEntityClass;                              //@synthesize localEntityClass=_localEntityClass - In the implementation block
@property (nonatomic,readonly) Class targetEntityClass;                             //@synthesize targetEntityClass=_targetEntityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * joinAsName;                          //@synthesize joinAsName=_joinAsName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localReferenceProperty;              //@synthesize localReferenceProperty=_localReferenceProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetKeyProperty;                   //@synthesize targetKeyProperty=_targetKeyProperty - In the implementation block
@property (nonatomic,readonly) long long joinType;                                  //@synthesize joinType=_joinType - In the implementation block
+(id)innerJoinClauseFromEntity:(Class)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 ;
+(id)leftJoinClauseFromEntity:(Class)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)SQLJoinClause;
-(id)_initWithJoinType:(long long)arg1 fromEntity:(Class)arg2 toTargetEntity:(Class)arg3 as:(id)arg4 localReference:(id)arg5 targetKey:(id)arg6 ;
-(Class)targetEntityClass;
-(Class)localEntityClass;
-(long long)joinType;
-(NSString *)joinAsName;
-(NSString *)localReferenceProperty;
-(NSString *)targetKeyProperty;
@end

