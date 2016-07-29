/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebDeviceOrientationProviderMockInternal : NSObject {

	unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock> >* m_core;

}
-(id)lastOrientation;
-(id)init;
-(void)setOrientation:(id)arg1 ;
-(void)setController:(DeviceOrientationControllerRef)arg1 ;
-(void)stopUpdating;
-(void)startUpdating;
@end

