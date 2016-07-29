/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError, NSArray, CKOperationMetrics, NSDictionary;

@interface CKOperationResult : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSError* _error;
	NSArray* _requestUUIDs;
	CKOperationMetrics* _metrics;
	NSDictionary* _w3cNavigationTimingByRequestUUID;
	NSDictionary* _responseHTTPHeadersByRequestUUID;

}

@property (nonatomic,retain) NSString * operationID;                                       //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;                                       //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) CKOperationMetrics * metrics;                                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * w3cNavigationTimingByRequestUUID;              //@synthesize w3cNavigationTimingByRequestUUID=_w3cNavigationTimingByRequestUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHTTPHeadersByRequestUUID;              //@synthesize responseHTTPHeadersByRequestUUID=_responseHTTPHeadersByRequestUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CKOperationMetrics *)metrics;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setW3cNavigationTimingByRequestUUID:(NSDictionary *)arg1 ;
-(void)setResponseHTTPHeadersByRequestUUID:(NSDictionary *)arg1 ;
-(NSArray *)requestUUIDs;
-(NSDictionary *)w3cNavigationTimingByRequestUUID;
-(NSDictionary *)responseHTTPHeadersByRequestUUID;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
@end

