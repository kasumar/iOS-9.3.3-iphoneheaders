/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {

	NSData* _data;
	NSURL* _url;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSString* _frameName;

}
-(id)frameName;
-(Class)_webResourceClass;
-(id)webResource;
-(void)dealloc;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(id)textEncodingName;
@end

