/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicContextualAlertAction.h>

@interface MusicContextualLibraryUpdateAlertAction : MusicContextualAlertAction {

	BOOL _isAddAction;
	BOOL _isKeepLocalAction;
	BOOL _isRemoveAction;

}

@property (nonatomic,readonly) BOOL isAddAction;                    //@synthesize isAddAction=_isAddAction - In the implementation block
@property (nonatomic,readonly) BOOL isKeepLocalAction;              //@synthesize isKeepLocalAction=_isKeepLocalAction - In the implementation block
@property (nonatomic,readonly) BOOL isRemoveAction;                 //@synthesize isRemoveAction=_isRemoveAction - In the implementation block
+(void)getContextualLibraryAddAction:(id*)arg1 removeAction:(id*)arg2 keepLocalAction:(id*)arg3 forEntityValueContext:(id)arg4 overrideItemEntityProvider:(id)arg5 allowAssetRemoval:(BOOL)arg6 shouldDismissHandler:(/*^block*/id)arg7 additionalPresentationHandler:(/*^block*/id)arg8 didDismissHandler:(/*^block*/id)arg9 ;
+(id)notificationTokenForOverrideItemEntityProvider:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)newAddExplicitContentWarningAlertControllerWithContentItemType:(unsigned long long)arg1 didDismissBlock:(/*^block*/id)arg2 ;
-(BOOL)isAddAction;
-(BOOL)isKeepLocalAction;
-(BOOL)isRemoveAction;
@end

