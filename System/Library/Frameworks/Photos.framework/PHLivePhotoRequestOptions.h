/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHLivePhotoRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	long long _deliveryMode;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
@end

