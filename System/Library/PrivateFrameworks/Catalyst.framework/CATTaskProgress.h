/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/Catalyst-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSError, NSDictionary, NSString;

@interface CATTaskProgress : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _isCancelable;
	BOOL _isCanceled;
	NSUUID* _UUID;
	unsigned long long _phase;
	id _resultObject;
	NSError* _error;
	NSDictionary* _userInfo;
	long long _completedUnitCount;
	long long _totalUnitCount;
	NSString* _requestClassName;

}

@property (nonatomic,copy) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (assign,nonatomic) unsigned long long phase;                  //@synthesize phase=_phase - In the implementation block
@property (nonatomic,retain) id resultObject;                           //@synthesize resultObject=_resultObject - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL isCancelable;                         //@synthesize isCancelable=_isCancelable - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;                           //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign,nonatomic) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
@property (nonatomic,copy) NSString * requestClassName;                 //@synthesize requestClassName=_requestClassName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)progressForOperation:(id)arg1 ;
+(void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2 ;
+(Class)classForResultObjectWithRequestClassName:(id)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(unsigned long long)state;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSUUID *)UUID;
-(void)setProgress:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(BOOL)isCanceled;
-(void)setUUID:(NSUUID *)arg1 ;
-(BOOL)isCancelable;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithOperationUUID:(id)arg1 ;
-(void)setResultObject:(id)arg1 ;
-(id)resultObject;
-(void)setIsCancelable:(BOOL)arg1 ;
-(void)setRequestClassName:(NSString *)arg1 ;
-(NSString *)requestClassName;
-(id)progressStateDescription;
-(void)setIsCanceled:(BOOL)arg1 ;
-(id)initWithOperation:(id)arg1 ;
@end

