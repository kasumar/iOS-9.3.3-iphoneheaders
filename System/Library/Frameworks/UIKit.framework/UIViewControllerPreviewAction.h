/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id handler;                    //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

