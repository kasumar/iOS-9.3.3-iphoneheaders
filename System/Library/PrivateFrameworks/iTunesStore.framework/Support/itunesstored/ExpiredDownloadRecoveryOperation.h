/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : ISOperation {

	SSMemoryEntity* _download;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
+(BOOL)canAttemptRecoveryWithError:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2 ;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end

