/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumberFormatter;

@interface MSCLDurationFormatter : NSObject {

	NSString* _durationFormatString;
	NSNumberFormatter* _hoursFormatter;
	NSNumberFormatter* _minutesAndSecondsFormatter;

}
-(id)initWithClientContext:(id)arg1 ;
-(id)stringFromDuration:(double)arg1 ;
@end

