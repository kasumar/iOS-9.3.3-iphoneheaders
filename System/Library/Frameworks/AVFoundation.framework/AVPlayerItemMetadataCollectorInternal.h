/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, NSObject, NSArray, NSDate, AVWeakReference;

@interface AVPlayerItemMetadataCollectorInternal : NSObject {

	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSArray* identifiers;
	NSArray* classifyingLabels;
	NSDate* mostRecentlyModifiedMetadataGroupTimestamp;
	AVWeakReference* weakReferenceToPlayerItem;

}
@end
