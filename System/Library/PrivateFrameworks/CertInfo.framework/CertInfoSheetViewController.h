/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol CertInfoSheetViewControllerDelegate;
@class NSString, NSDate, NSArray;

@interface CertInfoSheetViewController : UIViewController {

	NSString* _serviceName;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _trustPurpose;
	NSDate* _trustExpiration;
	NSArray* _trustProperties;
	id<CertInfoSheetViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * trustTitle;                                                //@synthesize trustTitle=_trustTitle - In the implementation block
@property (nonatomic,retain) NSString * trustSubtitle;                                             //@synthesize trustSubtitle=_trustSubtitle - In the implementation block
@property (nonatomic,retain) NSString * trustPurpose;                                              //@synthesize trustPurpose=_trustPurpose - In the implementation block
@property (nonatomic,retain) NSDate * trustExpiration;                                             //@synthesize trustExpiration=_trustExpiration - In the implementation block
@property (nonatomic,retain) NSArray * trustProperties;                                            //@synthesize trustProperties=_trustProperties - In the implementation block
@property (assign,nonatomic,__weak) id<CertInfoSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)serviceName;
-(void)setDelegate:(id<CertInfoSheetViewControllerDelegate>)arg1 ;
-(id<CertInfoSheetViewControllerDelegate>)delegate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_cancel;
-(NSArray *)trustProperties;
-(void)_setupNavItem;
-(void)setTrustProperties:(NSArray *)arg1 ;
-(void)_accept;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(NSString *)trustPurpose;
-(NSDate *)trustExpiration;
-(void)_pushDetailsView;
-(void)setTrustPurpose:(NSString *)arg1 ;
-(void)setTrustExpiration:(NSDate *)arg1 ;
-(void)_dismissWithResult:(int)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end

