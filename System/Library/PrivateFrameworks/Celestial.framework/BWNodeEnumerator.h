/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {

	BWGraph* _graph;
	unsigned long long _depth;
	NSMutableDictionary* _nodeVisitCountMap;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithGraph:(id)arg1 ;
-(unsigned long long)_updateVisitedCount:(id)arg1 ;
-(id)_visitedCount:(id)arg1 ;
@end

