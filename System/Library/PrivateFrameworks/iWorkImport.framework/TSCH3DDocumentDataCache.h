/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSKDocumentRoot;

@interface TSCH3DDocumentDataCache : NSObject {

	TSKDocumentRoot* mDocumentRoot;

}
+(id)dataFromCache:(id)arg1 forFile:(id)arg2 group:(id)arg3 generateBlock:(/*^block*/id)arg4 ;
+(id)dataCacheWithDocumentRoot:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)dataForFile:(id)arg1 group:(id)arg2 generateBlock:(/*^block*/id)arg3 ;
-(BOOL)debug_nukeDocumentCachePathForGroup:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

