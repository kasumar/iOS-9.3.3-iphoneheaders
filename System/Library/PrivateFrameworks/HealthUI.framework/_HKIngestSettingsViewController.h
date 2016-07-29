/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>

@class HKDataUnitController, NSMutableArray, NSString, NSUUID, HKHealthStore;

@interface _HKIngestSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {

	HKDataUnitController* _dataUnitController;
	NSMutableArray* _dataTypeNames;
	BOOL _deviceEnabled;
	BOOL _deviceFound;
	NSString* _cellTitle;
	NSUUID* _deviceIdentifier;
	HKHealthStore* _healthStore;

}

@property (nonatomic,copy) NSString * cellTitle;                       //@synthesize cellTitle=_cellTitle - In the implementation block
@property (nonatomic,retain) NSUUID * deviceIdentifier;                //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)deviceIdentifier;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)_initWithHealthStore:(id)arg1 dataUnitController:(id)arg2 ;
-(void)reloadData:(id)arg1 ;
-(NSString *)cellTitle;
-(void)setCellTitle:(NSString *)arg1 ;
@end

