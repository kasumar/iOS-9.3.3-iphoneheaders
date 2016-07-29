/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPStorage, NSMutableArray, NSCharacterSet;

@interface TSWPStorageIterator : NSObject {

	TSWPStorage* _storage;
	unsigned long long _charIndex;
	unsigned long long _startCharIndex;
	NSMutableArray* _rangeProviders;
	NSMutableArray* _locationProviders;
	NSMutableArray* _pendingEvents;
	BOOL _sendEventsForNilObjects;
	BOOL _lastEventWasMarker;
	NSCharacterSet* _markers;

}

@property (nonatomic,retain) NSCharacterSet * markers;              //@synthesize markers=_markers - In the implementation block
-(void)addRangeProvider:(id)arg1 ;
-(void)p_emitPendingCharactersAndEvent:(id)arg1 ;
-(void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(NSRange)arg3 object:(id)arg4 ;
-(void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2 ;
-(void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned long long)arg2 atCharIndex:(unsigned long long)arg3 ;
-(void)addAttributeRangeProvider:(int)arg1 ;
-(void)addLocationProvider:(id)arg1 ;
-(id)nextEvent;
-(NSCharacterSet *)markers;
-(void)setMarkers:(NSCharacterSet *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithStorage:(id)arg1 ;
@end

