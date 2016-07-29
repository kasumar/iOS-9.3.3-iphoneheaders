/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, NSURL;

@interface SUSectionButton : NSObject <NSCopying> {

	NSString* _accessibilityTitle;
	NSString* _displayTitle;
	UIImage* _image;
	UIEdgeInsets _imageInsets;
	NSURL* _imageURL;
	float _imageURLScale;
	long long _tag;

}

@property (nonatomic,copy) NSString * accessibilityTitle;              //@synthesize accessibilityTitle=_accessibilityTitle - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                    //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) float imageURLScale;                      //@synthesize imageURLScale=_imageURLScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                 //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) long long tag;                            //@synthesize tag=_tag - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayTitle;
-(UIImage *)image;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(id)initWithSectionButtonDictionary:(id)arg1 ;
-(void)applyToBarButtonItem:(id)arg1 ;
-(float)imageURLScale;
-(NSString *)accessibilityTitle;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(void)setImageURLScale:(float)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

