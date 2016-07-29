/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, CoreDAVResponseItem, NSURL;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {

	NSSet* _propPatchRemoveElements;
	NSSet* _propPatchSetElements;
	CoreDAVResponseItem* _responseItem;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (assign,nonatomic) id<CoreDAVPropPatchTaskDelegate> delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                                //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                                      //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * responseItem;                     //@synthesize responseItem=_responseItem - In the implementation block
@property (nonatomic,retain) NSSet * propPatchRemoveElements;                        //@synthesize propPatchRemoveElements=_propPatchRemoveElements - In the implementation block
@property (nonatomic,retain) NSSet * propPatchSetElements;                           //@synthesize propPatchSetElements=_propPatchSetElements - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(NSSet *)propPatchSetElements;
-(NSSet *)propPatchRemoveElements;
-(void)setPropPatchRemoveElements:(NSSet *)arg1 ;
-(void)setPropPatchSetElements:(NSSet *)arg1 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3 ;
-(CoreDAVResponseItem *)responseItem;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
-(id)httpMethod;
-(id)additionalHeaderValues;
@end

