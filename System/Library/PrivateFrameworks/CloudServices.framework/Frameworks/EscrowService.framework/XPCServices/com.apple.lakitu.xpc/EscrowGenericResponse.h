/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Frameworks/EscrowService.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.lakitu/LakituResponse.h>

@class NSString;

@interface EscrowGenericResponse : LakituResponse

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) long long errorCode; 
-(NSString *)message;
-(long long)version;
-(long long)status;
-(long long)errorCode;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

