/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem {

	CoreDAVItem* _supported;

}

@property (nonatomic,retain) CoreDAVItem * supported;              //@synthesize supported=_supported - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setSupported:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)supported;
@end

