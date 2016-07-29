/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct Strong<JSC::JSObject> {
	JSValue m_slot;
} Strong<JSC::JSObject>;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct Weak<JSC::JSGlobalObject> {
	WeakImpl m_impl;
} Weak<JSC::JSGlobalObject>;

typedef struct RefPtr<JSC::JSLock> {
	JSLock m_ptr;
} RefPtr<JSC::JSLock>;

typedef struct {
	int payload;
	int tag;
} SCD_Struct_JS6;

typedef struct Weak<JSC::JSObject> {
	WeakImpl m_impl;
} Weak<JSC::JSObject>;

typedef struct Weak<JSC::JSString> {
	WeakImpl m_impl;
} Weak<JSC::JSString>;

typedef struct JSValue {
	EncodedValueDescriptor u;
	long long asInt64;
	JSCell ptr;
	SCD_Struct_JS6) asBits;
} JSValue;

typedef struct WeakValueRef {
	int m_tag;
	WeakValueUnion u;
	JSValue m_primitive;
	Weak<JSC::JSObject> m_object;
	Weak<JSC::JSString>) m_string;
} WeakValueRef;

typedef struct OpaqueJSContextGroup* OpaqueJSContextGroupRef;

typedef struct _compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > *, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > > {
	WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > __first_;
} compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > *, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > >;

typedef struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > > {
	compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > *, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > > __ptr_;
} unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > >;

