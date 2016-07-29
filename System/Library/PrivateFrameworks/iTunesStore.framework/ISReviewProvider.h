/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISReviewProvider : ISDataProvider <NSCopying> {

	BOOL _backgroundReview;

}

@property (getter=isBackgroundReview) BOOL backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

