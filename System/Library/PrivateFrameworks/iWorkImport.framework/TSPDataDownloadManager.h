/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPDataDownloadManagerDelegate;
@class TSPObjectContext, TSPDocumentResourceDataProvider;

@interface TSPDataDownloadManager : NSObject {

	TSPObjectContext* _context;
	TSPDocumentResourceDataProvider* _docServerDataProvider;
	id<TSPDataDownloadManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TSPDataDownloadManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 ;
-(void)setDelegate:(id<TSPDataDownloadManagerDelegate>)arg1 ;
-(id)init;
-(id<TSPDataDownloadManagerDelegate>)delegate;
-(id)initWithContext:(id)arg1 ;
@end

