/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                           //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)httpMethod;
-(id)additionalHeaderValues;
@end
