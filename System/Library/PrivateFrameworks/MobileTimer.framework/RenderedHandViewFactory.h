/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSBundle, NSString, NSMutableDictionary;

@interface RenderedHandViewFactory : NSObject {

	NSBundle* _resourcesBundle;
	NSString* _imagePath;
	CGPoint _offset;
	CGSize _scale;
	CGPDFPageRef _page;
	CGSize _viewSize;
	BOOL _allowCaching;
	NSMutableDictionary* _angleCache;
	unsigned long long _registeredClientsCount;

}

@property (nonatomic,readonly) BOOL allowCaching;                                    //@synthesize allowCaching=_allowCaching - In the implementation block
@property (nonatomic,readonly) NSString * key; 
@property (assign,nonatomic) unsigned long long registeredClientsCount;              //@synthesize registeredClientsCount=_registeredClientsCount - In the implementation block
+(void)flushAllCaches;
+(id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 ;
+(id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5 ;
+(void)unregisterForFactory:(id)arg1 ;
-(void)dealloc;
-(NSString *)key;
-(void)flushCache;
-(id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5 ;
-(unsigned long long)registeredClientsCount;
-(void)setRegisteredClientsCount:(unsigned long long)arg1 ;
-(id)renderImageForAngle:(double)arg1 viewSize:(CGSize)arg2 ;
-(id)imageForAngle:(double)arg1 viewSize:(CGSize)arg2 ;
-(BOOL)allowCaching;
@end

