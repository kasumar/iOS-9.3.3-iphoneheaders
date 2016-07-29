/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKContactMediaObject.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation> {

	CGSize _coordinate;

}

@property (assign,nonatomic) CGSize coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(BOOL)isPreviewable;
+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(double)arg1 ;
+(id)vcardDataFromCLLocation:(id)arg1 ;
+(id)placeholderPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)mapItem;
-(int)mediaType;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)initWithTransfer:(id)arg1 ;
-(id)pin;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(Class)previewBalloonViewClass;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)generatePlaceholderThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
@end

