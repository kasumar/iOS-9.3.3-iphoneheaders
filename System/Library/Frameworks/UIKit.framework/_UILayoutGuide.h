/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UILayoutSupport.h>

@class NSArray, NSString, NSLayoutYAxisAnchor, NSLayoutDimension;

@interface _UILayoutGuide : UIView <UILayoutSupport> {

	BOOL _allowsArchivingAsSubview;
	BOOL _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;
	NSString* _archivedIdentifier;

}

@property (assign,setter=_setHorizontal:,getter=isHorizontal,nonatomic) BOOL _horizontal;                                 //@synthesize horizontal=_horizontal - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier;                                 //@synthesize archivedIdentifier=_archivedIdentifier - In the implementation block
@property (assign,setter=_setAllowsArchivingAsSubview:,nonatomic) BOOL _allowsArchivingAsSubview;                         //@synthesize allowsArchivingAsSubview=_allowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;              //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
+(id)_verticalLayoutGuide;
+(id)_horizontalLayoutGuide;
+(id)classFallbacksForKeyedArchiver;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(BOOL)_isFloatingLayoutItem;
-(BOOL)_allowsArchivingAsSubview;
-(id)_layoutVariablesWithAmbiguousValue;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(NSString *)_archivedIdentifier;
-(BOOL)isHorizontal;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(void)_setHorizontal:(BOOL)arg1 ;
-(void)_setAllowsArchivingAsSubview:(BOOL)arg1 ;
@end

