/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoComplicationSettings/NCSInternalSettingsManager.h>

@protocol NCSSettingsManagerDelegate;
@interface NCSSettingsManager : NCSInternalSettingsManager {

	id<NCSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedSettingsManager;
-(void)loadSettings;
-(void)setDelegate:(id<NCSSettingsManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NCSSettingsManagerDelegate>)delegate;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_updateSockPuppetComplications;
-(id)_fetchSockPuppetComplications;
@end

