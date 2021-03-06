/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface YTPersistentVideoList : NSObject {

	NSString* _categoryName;
	NSMutableArray* _videos;

}
+(id)persistPathWithCategoryName:(id)arg1 ;
-(void)dealloc;
-(void)removeFromDisk;
-(void)persist;
-(id)videos;
-(void)addVideo:(id)arg1 ;
-(id)initWithCategoryName:(id)arg1 ;
@end

