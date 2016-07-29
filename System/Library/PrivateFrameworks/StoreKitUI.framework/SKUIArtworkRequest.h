/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUIArtworkRequestDelegate;
@class SSVURLDataConsumer, NSString, NSURL;

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying> {

	SSVURLDataConsumer* _dataConsumer;
	id<SKUIArtworkRequestDelegate> _delegate;
	NSString* _imageName;
	NSURL* _url;

}

@property (nonatomic,retain) SSVURLDataConsumer * dataConsumer;                           //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIArtworkRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                          //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                   //@synthesize url=_url - In the implementation block
-(void)setDelegate:(id<SKUIArtworkRequestDelegate>)arg1 ;
-(id<SKUIArtworkRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(SSVURLDataConsumer *)dataConsumer;
-(NSString *)imageName;
@end

