/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle {

	OKProducerPlugin* _plugin;

}

@property (assign,nonatomic) OKProducerPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoaded;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
-(OKProducerPlugin *)plugin;
@end

