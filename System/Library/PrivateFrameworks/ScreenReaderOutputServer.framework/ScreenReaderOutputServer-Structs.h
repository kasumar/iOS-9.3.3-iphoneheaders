/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSMutableString, NSMutableArray;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	NSData* realData;
	NSData* virtualData;
	NSData* aggregatedData;
	int virtualAlignment;
	long long masterStatusCellIndex;
} SCD_Struct_SC2;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct {
	double quietSince;
	double busySince;
	double nextWillMemorizeNotificationTime;
	double memorizeNextKeyImmediatelyTimeout;
	BOOL prepareToMemorizeNextKey;
	BOOL requestPrepareToMemorizeNextKey;
	BOOL memorizeNextKeyImmediately;
	BOOL willMemorizeNow;
	BOOL isQuiet;
	BOOL newDown;
	__CFArray currentChord;
	__CFSet downKeys;
	unsigned routerEvent;
	BOOL currentBrailleChordContainsSpacebar;
	BOOL spacebarIsDown;
	BOOL skipBrailleKeyboardKeyTranslation;
	__CFArray currentBrailleChord;
	__CFSet downBrailleDots;
	unsigned currentBrailleModifiers;
	unsigned downBrailleModifiers;
	NSMutableString* brailleString;
	NSRange brailleStringSelectionRange;
	BOOL brailleStringNeedsUpdate;
	NSMutableArray* brailleStringModifiers;
	double lastBrailleChordPosted;
	double brailleCharExponentialMovingAverage;
	double brailleTranslationTimeout;
} SCD_Struct_SC5;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	NSData* aggregatedData;
	int virtualAlignment;
	long long masterStatusCellIndex;
	BOOL currentAnnouncementUnread;
	BOOL anyUnreadAnnouncements;
} SCD_Struct_SC9;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	BOOL didDisplay;
	BOOL keypress;
	BOOL keyWillMem;
	BOOL keymem;
	BOOL panLeft;
	BOOL panRight;
	BOOL showPreviousAnnouncement;
	BOOL showNextAnnouncement;
	BOOL configChanged;
	BOOL playDisplayConnectionSound;
	BOOL playBorderHitSound;
	BOOL playCommandNotSupportedSound;
	BOOL bluetoothDisplayLoadFailed;
	BOOL tableLoadFailed;
	BOOL displayModeChanged;
} SCD_Struct_SC11;

typedef struct {
	NSData* data;
	int alignment;
	long long length;
	char* cells;
} SCD_Struct_SC12;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct __CFSet* CFSetRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_SC15;

