/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlaceDataProvider : NSObject {

	BOOL _isLoading;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) BOOL isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(BOOL)isLoading;
-(void)cancelRequest;
-(void)requestCompleted;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)cancelProviderRequest;
-(id)finishedHandler;
-(void)providerDidCancel;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setFinishedHandler:(id)arg1 ;
-(void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2 ;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2 ;
@end

