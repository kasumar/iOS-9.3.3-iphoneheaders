/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {

	BOOL _dirty;
	double _extendedHeight;

}

@property (nonatomic,readonly) BOOL showsInputViews; 
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (nonatomic,readonly) BOOL isUndocked; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (assign,nonatomic) double extendedHeight;               //@synthesize extendedHeight=_extendedHeight - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placement;
+(id)encodablePlacementsForXPC;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isInteractive;
-(BOOL)showsInputViews;
-(BOOL)isUndocked;
-(BOOL)showsKeyboard;
-(BOOL)inputViewWillAppear;
-(void)setDirty;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned long long)notificationsForTransitionToPlacement:(id)arg1 ;
-(BOOL)accessoryViewWillAppear;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 ;
-(double)extendedHeight;
-(void)setExtendedHeight:(double)arg1 ;
@end

