/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileLookup/MobileLookup-Structs.h>
@class NSURL, NSString, NSDictionary, MLULookupItemContent;

@interface MLULookupItem : NSObject {

	NSURL* _url;
	DDResultRef _ddResult;
	NSString* _text;
	NSRange _focusRange;
	NSRange _proposedRange;
	BOOL _resolved;
	NSDictionary* _documentProperties;
	MLULookupItemContent* _previewContent;

}

@property (retain) NSDictionary * documentProperties;                            //@synthesize documentProperties=_documentProperties - In the implementation block
@property (nonatomic,retain) MLULookupItemContent * previewContent;              //@synthesize previewContent=_previewContent - In the implementation block
-(void)dealloc;
-(void)commit;
-(id)initWithURL:(id)arg1 dataDetectorsResult:(DDResultRef)arg2 text:(id)arg3 range:(NSRange)arg4 ;
-(void)setDocumentProperties:(NSDictionary *)arg1 ;
-(BOOL)resolve;
-(id)viewControllerToPresent;
-(unsigned long long)commitType;
-(void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)documentProperties;
-(void)setPreviewContent:(MLULookupItemContent *)arg1 ;
-(BOOL)_resolveURL:(id)arg1 DDResult:(DDResultRef)arg2 focusRange:(NSRange)arg3 ;
-(BOOL)_resolveText:(id)arg1 focusRange:(NSRange)arg2 ;
-(MLULookupItemContent *)previewContent;
-(id)webUrlToPresent;
-(NSRange)proposedRange;
@end

