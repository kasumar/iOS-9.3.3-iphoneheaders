/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class UIView;

@interface IMViewState : NSObject {

	UIView* _view;
	unsigned long long _flags;
	UIView* _placeholderView;
	CGAffineTransform _transform;
	double _zPosition;
	unsigned long long _autoresizingMask;
	CGRect _frame;

}
+(id)saveStateForView:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithView:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)restore;
@end
