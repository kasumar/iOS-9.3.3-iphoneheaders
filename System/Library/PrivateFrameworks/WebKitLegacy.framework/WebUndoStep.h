/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebUndoStep : NSObject {

	RefPtr<WebCore::UndoStep>* m_step;

}
+(id)stepWithUndoStep:(PassRefPtr<WebCore::UndoStep>*)arg1 ;
+(void)initialize;
-(id)initWithUndoStep:(PassRefPtr<WebCore::UndoStep>*)arg1 ;
-(void)dealloc;
-(UndoStep*)step;
-(void)finalize;
@end

