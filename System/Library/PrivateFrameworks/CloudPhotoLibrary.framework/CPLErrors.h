/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPLErrors : NSObject
+(id)unknownError;
+(id)incorrectMachineStateErrorWithReason:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 ;
+(id)posixErrorForURL:(id)arg1 ;
+(id)invalidClientCacheErrorWithReason:(id)arg1 ;
+(id)incorrectParametersErrorForParameter:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 description:(id)arg2 ;
+(id)cplErrorWithCode:(long long)arg1 description:(id)arg2 arguments:(char*)arg3 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(char*)arg5 ;
+(id)underlyingErrorWithReason:(id)arg1 ;
+(id)versionMismatchError;
+(id)notImplementedError;
+(id)transportErrorFromTransportError:(id)arg1 ;
+(id)libraryClosedError;
+(id)invalidCloudCacheErrorWithReason:(id)arg1 ;
+(id)invalidDaemonErrorWithConnectionError:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(char*)arg4 ;
+(id)missingError;
+(id)operationCancelledError;
@end

