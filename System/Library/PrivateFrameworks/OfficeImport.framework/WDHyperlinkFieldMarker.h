/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

@interface WDHyperlinkFieldMarker : WDFieldMarker {

	NSString* mLink;
	NSString* mFragment;
	unsigned mInternalLink : 1;

}

@property (nonatomic,retain) NSString * link; 
@property (nonatomic,retain) NSString * fragment; 
@property (assign,nonatomic) BOOL internalLink; 
-(void)dealloc;
-(id)description;
-(NSString *)fragment;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(BOOL)internalLink;
-(int)runType;
-(void)setInternalLink:(BOOL)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
@end

