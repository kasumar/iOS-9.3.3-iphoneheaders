/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, PRSImage;


@protocol PRSRichTitleSection <PRSTitleSection>
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSString * title_align; 
@property (nonatomic,retain) NSString * content_rating_text; 
@property (assign,nonatomic) BOOL thumbnail_crop_circle; 
@optional
-(void)setThumbnail_crop_circle:(BOOL)arg1;
-(void)setContent_rating_text:(id)arg1;
-(BOOL)thumbnail_crop_circle;
-(NSString *)content_rating_text;

@required
-(void)setImage:(id)arg1;
-(PRSImage *)image;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(void)setTitle_align:(id)arg1;
-(NSString *)title_align;

@end

