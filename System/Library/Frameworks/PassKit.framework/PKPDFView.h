/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@interface PKPDFView : UIView {

	CGPDFPageRef _page;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 document:(CGPDFDocumentRef)arg2 ;
@end

