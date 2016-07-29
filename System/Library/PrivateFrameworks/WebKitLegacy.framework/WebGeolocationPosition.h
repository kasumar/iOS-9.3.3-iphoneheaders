/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {

	WebGeolocationPositionInternal* _internal;

}
-(id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 ;
-(id)initWithGeolocationPosition:(PassRefPtr<WebCore::GeolocationPosition>*)arg1 ;
-(void)dealloc;
@end

