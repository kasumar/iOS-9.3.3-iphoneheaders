/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXImageView.h>

@class SXGalleryItem, SXContext;

@interface SXGalleryItemImageView : SXImageView {

	SXGalleryItem* _galleryItem;
	unsigned long long _index;
	SXContext* _context;

}

@property (nonatomic,readonly) SXGalleryItem * galleryItem;              //@synthesize galleryItem=_galleryItem - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) SXContext * context;                      //@synthesize context=_context - In the implementation block
-(id)initWithGalleryItem:(id)arg1 forIndex:(unsigned long long)arg2 context:(id)arg3 ;
-(SXGalleryItem *)galleryItem;
-(SXContext *)context;
-(id)accessibilityLabel;
-(unsigned long long)index;
-(BOOL)isAccessibilityElement;
@end
