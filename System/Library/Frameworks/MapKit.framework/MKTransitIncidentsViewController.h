/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface MKTransitIncidentsViewController : UITableViewController {

	NSArray* _incidents;

}
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)_localeDidChange;
-(id)initWithIncidents:(id)arg1 ;
-(id)_cellForRow:(long long)arg1 inSection:(long long)arg2 ;
@end
