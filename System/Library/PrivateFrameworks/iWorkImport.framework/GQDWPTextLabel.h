/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDWPTextLabel : NSObject {

	CFStringRef mFormat;
	int mLabelType;
	int mFirst;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(int)labelType;
-(CFStringRef)format;
-(int)first;
@end
