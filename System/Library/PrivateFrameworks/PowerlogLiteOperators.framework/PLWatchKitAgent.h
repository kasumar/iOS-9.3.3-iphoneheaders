/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent {

	PLXPCListenerOperatorComposition* _xpcHandler;

}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;              //@synthesize xpcHandler=_xpcHandler - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
-(void)initOperatorDependancies;
-(PLXPCListenerOperatorComposition *)xpcHandler;
-(void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(id)appNameForWatchAppExtension:(id)arg1 ;
@end

