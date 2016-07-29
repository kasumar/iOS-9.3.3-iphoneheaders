/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNBoundLayoutConstraint.h>

@interface CNBaselineBoundLayoutConstraint : CNBoundLayoutConstraint {

	double _baselineConstant;
	BOOL _ignoreAccessibilitySizes;

}

@property (assign) BOOL ignoreAccessibilitySizes;              //@synthesize ignoreAccessibilitySizes=_ignoreAccessibilitySizes - In the implementation block
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 textAttributesObject:(id)arg6 keyPath:(id)arg7 baselineConstant:(double)arg8 ;
-(void)_boundValueDidChange;
-(BOOL)ignoreAccessibilitySizes;
-(void)setIgnoreAccessibilitySizes:(BOOL)arg1 ;
@end

