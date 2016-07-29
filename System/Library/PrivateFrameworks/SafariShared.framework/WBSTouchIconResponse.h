/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSSiteMetadataResponse.h>

@class UIImage, UIColor;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse {

	BOOL _generated;
	UIImage* _touchIcon;
	UIColor* _extractedBackgroundColor;

}

@property (nonatomic,readonly) UIImage * touchIcon;                             //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,readonly) UIColor * extractedBackgroundColor;              //@synthesize extractedBackgroundColor=_extractedBackgroundColor - In the implementation block
@property (getter=isGenerated,nonatomic,readonly) BOOL generated;               //@synthesize generated=_generated - In the implementation block
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isGenerated;
-(UIImage *)touchIcon;
-(id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(UIColor *)extractedBackgroundColor;
@end

