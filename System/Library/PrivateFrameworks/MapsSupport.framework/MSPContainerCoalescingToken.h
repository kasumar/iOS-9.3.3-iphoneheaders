/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerCoalescingToken.h>

@protocol MSPContainerCoalescingToken <NSObject>
@required
-(void)endCoalescingEdits;

@end


@protocol NSObjectNSCopying;
@class MSPContainer, NSString;

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken> {

	MSPContainer* _container;
	id<NSObject><NSCopying> _context;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)endCoalescingEdits;
-(id)initWithContainerOwner:(id)arg1 context:(id)arg2 ;
@end
