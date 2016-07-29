/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying> {

	NSString* _remainingKeyName;
	NSString* _disappearingKeyName;
	NSArray* _orderedKeyList;
	UIKBGeometry* _factors;

}

@property (nonatomic,retain) NSString * remainingKeyName;                 //@synthesize remainingKeyName=_remainingKeyName - In the implementation block
@property (nonatomic,retain) NSString * disappearingKeyName;              //@synthesize disappearingKeyName=_disappearingKeyName - In the implementation block
@property (nonatomic,retain) NSArray * orderedKeyList;                    //@synthesize orderedKeyList=_orderedKeyList - In the implementation block
@property (nonatomic,retain) UIKBGeometry * factors;                      //@synthesize factors=_factors - In the implementation block
+(id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3 ;
+(id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)orderedKeyList;
-(NSString *)disappearingKeyName;
-(NSString *)remainingKeyName;
-(UIKBGeometry *)factors;
-(void)setRemainingKeyName:(NSString *)arg1 ;
-(void)setDisappearingKeyName:(NSString *)arg1 ;
-(void)setOrderedKeyList:(NSArray *)arg1 ;
-(void)setFactors:(UIKBGeometry *)arg1 ;
@end

