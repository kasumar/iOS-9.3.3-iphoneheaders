/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection;

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	id _value;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) id value;                                         //@synthesize value=_value - In the implementation block
-(UITraitCollection *)traitCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(id)initWithTraitCollection:(id)arg1 value:(id)arg2 ;
@end

