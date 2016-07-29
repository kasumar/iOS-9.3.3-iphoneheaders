/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface WebCascadeList : NSArray {

	WeakPtr<WebCore::FontCascade>* _font;
	int _character;
	unsigned long long _count;
	Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16>* _fontDescriptors;

}
-(id)initWithFont:(const FontCascade*)arg1 character:(int)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
@end

