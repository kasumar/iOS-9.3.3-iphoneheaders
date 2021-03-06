/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface NSFilePresenterAsynchronousOperation : NSOperation {

	/*^block*/id _block;
	BOOL _isFinished;
	BOOL _isExecuting;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isAsynchronous;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
@end

