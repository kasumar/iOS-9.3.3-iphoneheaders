/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADAdSheetConnectionDelegate.h>
#import <libobjc.A.dylib/ADAdSheetProxyDelegate.h>

@class ADAdSheetConnection, NSString;

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate> {

	ADAdSheetConnection* _connection;

}

@property (nonatomic,retain) ADAdSheetConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(ADAdSheetConnection *)connection;
-(void)setConnection:(ADAdSheetConnection *)arg1 ;
-(void)reportIngestionForPassWithTeamIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 iAdReportingIdentifier:(id)arg4 ;
-(BOOL)shouldLaunchAdSheet;
-(id)additionalAdSheetLaunchOptions;
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1 ;
@end

