/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNActionGroup.h>

@class NSString;

@interface SCNActionReference : SCNActionGroup {

	NSString* referenceName;

}

@property (nonatomic,copy) NSString * referenceName; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isAReference;
-(void)setReferenceName:(NSString *)arg1 ;
-(NSString *)referenceName;
@end

