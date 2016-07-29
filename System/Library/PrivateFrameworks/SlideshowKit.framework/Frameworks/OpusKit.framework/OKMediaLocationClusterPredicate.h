/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)title;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
@end

