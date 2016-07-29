/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LKStudentProviding.h>

@class NSArray, NSString;

@interface LKUsers : NSObject <LKStudentProviding> {

	NSArray* _students;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * students;                      //@synthesize students=_students - In the implementation block
-(NSArray *)students;
-(void)setStudents:(NSArray *)arg1 ;
-(id)initWithUsers:(id)arg1 ;
@end

