/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDOperation.h>

@class UITextView;

@interface DDTextKitOperation : DDOperation {

	NSRange _range;
	int _editCount;

}

@property (nonatomic,retain) UITextView * container; 
@property (assign) NSRange range;                                 //@synthesize range=_range - In the implementation block
-(void)textDidChange:(id)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(NSRange)range;
-(void)cleanup;
-(void)setRange:(NSRange)arg1 ;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(BOOL)needsToStartOver;
-(BOOL)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_updateGenerationNumber;
-(BOOL)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(BOOL)_addResultsToAttributes;
@end

