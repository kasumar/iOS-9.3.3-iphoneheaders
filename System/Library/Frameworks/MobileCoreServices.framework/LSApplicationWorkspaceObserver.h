/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding> {

	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
@end

