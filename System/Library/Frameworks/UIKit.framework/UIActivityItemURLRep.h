/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {

	NSURL* _URL;
	UIImage* _thumbnail;
	long long _attachmentURLType;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                      //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) long long attachmentURLType;              //@synthesize attachmentURLType=_attachmentURLType - In the implementation block
-(id)scheme;
-(BOOL)isFileURL;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(UIImage *)thumbnail;
-(long long)attachmentURLType;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setAttachmentURLType:(long long)arg1 ;
@end

