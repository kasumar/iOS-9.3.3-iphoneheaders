/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <SpringBoard/SpringBoard-Structs.h>
@class NSLock, PKPassLibrary, NSObject;

@interface SBResetManager : NSObject {

	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;
	BOOL _paymentCardsExist;
	PKPassLibrary* _passLibrary;
	SCD_Struct_SB28* _paymentCardDeletionProgressStack;
	/*^block*/id _postCardDeletionHandler;
	NSObject*<OS_dispatch_semaphore> _resetThreadSemaphore;

}
+(id)sharedInstance;
-(void)prepareToResetInMode:(int)arg1 ;
-(void)beginReset;
-(void)_beginReset:(id)arg1 ;
-(void)performPaymentCardDeletionWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetThread;
-(void)_resetFinished;
-(void)_postResetEnded;
-(void)dealloc;
-(id)init;
-(void)setMode:(int)arg1 ;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3 ;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(BOOL)arg3 ;
@end

