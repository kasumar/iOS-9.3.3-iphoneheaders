/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class UIImage, SBSnapshotDataProviderContext, NSString, XBSnapshotDataProviderContext;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {

	UIImage* _image;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 ;
-(XBSnapshotDataProviderContext *)context;
-(id)fetchImage;
@end

