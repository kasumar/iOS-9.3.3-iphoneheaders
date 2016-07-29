/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(void)dealloc;
-(id)init;
-(id)_weakReference;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(BOOL)suppressesPlayerRendering;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(SCD_Struct_CM5)_itemTimeForHostTimeAsCMTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_CM5)itemTimeForMachAbsoluteTime:(long long)arg1 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)finalize;
@end

