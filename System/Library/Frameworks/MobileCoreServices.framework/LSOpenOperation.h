/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSString, NSDictionary;

@interface LSOpenOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	BOOL _sourceIsManaged;
	BOOL _userSpecifiedApp;
	NSURL* _resourceURL;
	NSString* _applicationIdentifier;
	NSString* _documentIdentifier;
	id _userInfoPlist;
	NSDictionary* _options;
	id _delegate;
	int _result;

}
-(BOOL)performAppLinkOpen;
-(BOOL)isConcurrent;
-(id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(void)dealloc;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)completeOperation;
-(id)error;
-(BOOL)didSucceed;
@end
