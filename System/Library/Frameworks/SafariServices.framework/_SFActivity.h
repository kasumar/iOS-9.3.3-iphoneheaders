/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol _SFActivityDelegate;
@interface _SFActivity : UIActivity {

	id<_SFActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_SFActivityDelegate>)arg1 ;
-(id<_SFActivityDelegate>)delegate;
-(void)activityDidFinish:(BOOL)arg1 ;
@end

