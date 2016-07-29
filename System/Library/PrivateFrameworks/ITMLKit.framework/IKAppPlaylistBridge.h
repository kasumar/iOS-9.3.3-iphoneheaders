/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppPlaylist;
@class IKAppContext, IKJSPlaylist;

@interface IKAppPlaylistBridge : NSObject {

	id<IKAppPlaylist> _appPlaylist;
	IKAppContext* _appContext;
	IKJSPlaylist* _jsPlaylist;

}

@property (nonatomic,readonly) id<IKAppPlaylist> appPlaylist;                 //@synthesize appPlaylist=_appPlaylist - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKJSPlaylist * jsPlaylist;              //@synthesize jsPlaylist=_jsPlaylist - In the implementation block
@property (readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
-(void)dealloc;
-(unsigned long long)length;
-(id)item:(long long)arg1 ;
-(id<IKAppPlaylist>)appPlaylist;
-(id)initWithJSPlaylist:(id)arg1 ;
-(id)replaceItemsAt:(long long)arg1 count:(unsigned long long)arg2 with:(id)arg3 ;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
-(IKJSPlaylist *)jsPlaylist;
-(IKAppContext *)appContext;
@end

