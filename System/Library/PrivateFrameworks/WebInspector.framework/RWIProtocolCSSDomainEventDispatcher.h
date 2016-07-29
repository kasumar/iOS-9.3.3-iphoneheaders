/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolCSSDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)mediaQueryResultChanged;
-(void)styleSheetChangedWithStyleSheetId:(id)arg1 ;
-(void)styleSheetAddedWithHeader:(id)arg1 ;
-(void)styleSheetRemovedWithStyleSheetId:(id)arg1 ;
-(void)namedFlowCreatedWithNamedFlow:(id)arg1 ;
-(void)namedFlowRemovedWithDocumentNodeId:(int)arg1 flowName:(id)arg2 ;
-(void)regionOversetChangedWithNamedFlow:(id)arg1 ;
-(void)registeredNamedFlowContentElementWithDocumentNodeId:(int)arg1 flowName:(id)arg2 contentNodeId:(int)arg3 nextContentNodeId:(int)arg4 ;
-(void)unregisteredNamedFlowContentElementWithDocumentNodeId:(int)arg1 flowName:(id)arg2 contentNodeId:(int)arg3 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

