/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTLIOAccelDeviceShmem, MTLIOAccelDeviceShmemPool, MTLIOAccelPooledResource, MTLIOAccelResourcePool, MTLIOAccelBuffer, MTLIOAccelDevice<MTLDevice>, NSString, MTLResourceAllocationInfo, MTLResourceList, <MTLTextureImplementation>, MTLRenderPassColorAttachmentDescriptorArrayInternal, <MTLBuffer>, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, <MTLFunction>, MTLVertexDescriptorInternal, MTLIOAccelDevice, MTLResourceListPool, MTLStencilDescriptorInternal;

typedef struct {
	MTLIOAccelDeviceShmem* tqe_next;
	id tqe_prev;
} SCD_Struct_MT0;

typedef struct MTLIOAccelDeviceShmemPrivate {
	MTLIOAccelDeviceShmemPool* pool;
	SCD_Struct_MT0 entry;
	unsigned long long time_added;
} MTLIOAccelDeviceShmemPrivate;

typedef struct {
	MTLIOAccelPooledResource* tqe_next;
	id tqe_prev;
} SCD_Struct_MT2;

typedef struct MTLIOAccelResourcePrivate {
	MTLIOAccelResourcePool* pool;
	SCD_Struct_MT2 entry;
	unsigned long long time_added;
} MTLIOAccelResourcePrivate;

typedef struct resourceQueue {
	MTLIOAccelPooledResource* tqh_first;
	id tqh_last;
} resourceQueue;

typedef struct MTLIOAccelResourcePoolPrivate {
	const esourceQueue queue;
	int lock;
	int count;
} MTLIOAccelResourcePoolPrivate;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
	unsigned field17;
	unsigned field18;
	float field19;
	float field20;
	unsigned field21;
	unsigned field22;
	unsigned field23;
	unsigned field24;
	unsigned field25;
	unsigned field26;
	unsigned field27;
	unsigned field28;
	unsigned field29;
	unsigned field30;
	unsigned field31;
	unsigned field32;
	unsigned field33;
	unsigned field34;
	unsigned field35;
	unsigned field36;
} SCD_Struct_MT6;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MT7;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 58;
} SCD_Struct_MT8;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 60;
} SCD_Struct_MT9;

typedef struct {
	BOOL field1;
	unsigned long long field2;
	/*function pointer*/void* field3;
} SCD_Struct_MT10;

typedef struct _NSZone* NSZoneRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT13;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	SCD_Struct_MT13 field1;
	SCD_Struct_MT13 field2;
} SCD_Struct_MT15;

typedef struct __IOAccelDevice* IOAccelDeviceRef;

typedef struct __IOAccelShared* IOAccelSharedRef;

typedef struct MTLRangeAllocator {
	MTLRangeAllocatorElement elements;
	unsigned numElements;
	unsigned capacity;
	unsigned capacityIncrement;
	unsigned defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct MTLIOAccelHeap {
	64MTLIOAccelBuffer* buffers;
	64MTLRangeAllocator allocators;
	unsigned count;
} MTLIOAccelHeap;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 24;
	unsigned field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_MT21;

typedef struct IOAccelResourceInfo {
	__IOSurface iosurface;
	unsigned resourceID;
	unsigned resourceSize;
	unsigned iosurfaceField;
} IOAccelResourceInfo;

typedef struct MTLIOAccelResource {
	/*function pointer*/void* vendor;
	unsigned long long reserved[4];
	IOAccelResourceInfo info;
	unsigned long long sharedAllocationUniqueId;
	unsigned long long cachedAllocationUniqueId;
	unsigned long long gpuAddress;
	MTLIOAccelDevice<MTLDevice>* device;
	NSString* label;
	unsigned long long globalTraceObjectID;
	unsigned long long labelTraceID;
	__IOAccelResource resourceRef;
	IOAccelClientSharedRO clientSharedRO;
	IOAccelClientSharedRW clientSharedRW;
	void virtualAddress;
	unsigned long long options;
	unsigned long long storageMode;
	unsigned long long cpuCacheMode;
	int responsibleProcess;
	unsigned long long purgeableState;
	MTLResourceAllocationInfo* sharedAllocationInfo;
	MTLResourceAllocationInfo* cachedAllocationInfo;
} MTLIOAccelResource;

typedef struct __IOAccelResource* IOAccelResourceRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct resourceListQueue {
	MTLResourceList* tqh_first;
	id tqh_last;
} resourceListQueue;

typedef struct MTLResourceListPoolPrivate {
	const esourceListQueue queue;
	int lock;
	int count;
} MTLResourceListPoolPrivate;

typedef struct __IOAccelCommandQueue* IOAccelCommandQueueRef;

typedef struct IOAccelCommandQueueSetPriorityAndBackgroundArgs {
	int priority;
	int background_priority;
	unsigned short priority_offset;
	unsigned short background_priority_offset;
} IOAccelCommandQueueSetPriorityAndBackgroundArgs;

typedef struct {
	unsigned char key[32];
} SCD_Struct_MT31;

typedef struct MTLFunctionData {
	unsigned long long bitCodeOffset;
	unsigned long long publicArgumentsOffset;
	unsigned long long privateArgumentsOffset;
	unsigned short airMajorVersion;
	unsigned short airMinorVersion;
	unsigned short languageMajorVersion;
	unsigned short languageMinorVersion;
	SCD_Struct_MT31 bitcodeHash;
} MTLFunctionData;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_MT33;

typedef struct {
	double red;
	double green;
	double blue;
	double alpha;
} SCD_Struct_MT34;

typedef struct MTLRenderPassAttachmentDescriptorPrivate {
	<MTLTextureImplementation>* texture;
	unsigned long long level;
	unsigned long long slice;
	unsigned long long depthPlane;
	unsigned long long loadAction;
	unsigned long long storeAction;
	SCD_Struct_MT34 clearColor;
	double clearDepth;
	unsigned clearStencil;
	<MTLTextureImplementation>* resolveTexture;
	unsigned long long resolveLevel;
	unsigned long long resolveSlice;
	unsigned long long resolveDepthPlane;
	unsigned long long resolveFilter;
	unsigned long long width;
	unsigned long long height;
} MTLRenderPassAttachmentDescriptorPrivate;

typedef struct MTLRenderPassDescriptorPrivate {
	MTLRenderPassColorAttachmentDescriptorArrayInternal* attachments;
	<MTLBuffer>* visibilityResultBuffer;
	unsigned long long framebufferWidth;
	unsigned long long framebufferHeight;
	BOOL ditherEnabled;
	BOOL expandedClipRange;
} MTLRenderPassDescriptorPrivate;

typedef struct {
	unsigned blendingEnabled : 1;
	unsigned rgbBlendOperation : 3;
	unsigned alphaBlendOperation : 3;
	unsigned sourceRGBBlendFactor : 4;
	unsigned sourceAlphaBlendFactor : 4;
	unsigned destinationRGBBlendFactor : 4;
	unsigned destinationAlphaBlendFactor : 4;
	unsigned writeMask : 4;
	unsigned logicOp : 4;
	unsigned logicOpEnabled : 1;
	unsigned pixelFormat;
} SCD_Struct_MT37;

typedef struct {
	unsigned long long hash;
} SCD_Struct_MT38;

typedef struct MTLRenderPipelineAttachmentDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT37 ;
	SCD_Struct_MT38) ;
} MTLRenderPipelineAttachmentDescriptorPrivate;

typedef struct {
	unsigned alphaToCoverageEnabled : 1;
	unsigned alphaToOneEnabled : 1;
	unsigned rasterizationEnabled : 1;
	unsigned inputPrimitiveTopology : 2;
	unsigned vertexEnabled : 1;
	unsigned pad : 26;
} SCD_Struct_MT40;

typedef struct MTLRenderPipelineDescriptorPrivate {
	MTLRenderPipelineColorAttachmentDescriptorArrayInternal* attachments;
	unsigned long long rtBlendDescHash[8];
	unsigned long long depthAttachmentPixelFormat;
	unsigned long long stencilAttachmentPixelFormat;
	unsigned long long sampleCount;
	unsigned long long sampleMask;
	/*function pointer*/void* ;
	unsigned sampleCoverageHash;
	f) sampleCoverage;
	/*function pointer*/void* ;
	unsigned miscHash;
	SCD_Struct_MT40) ;
	NSString* label;
	<MTLFunction>* vertexFunction;
	<MTLFunction>* fragmentFunction;
	MTLVertexDescriptorInternal* vertexDescriptor;
} MTLRenderPipelineDescriptorPrivate;

typedef struct shmemPoolQueue {
	MTLIOAccelDeviceShmem* tqh_first;
	id tqh_last;
} shmemPoolQueue;

typedef struct MTLIOAccelDeviceShmemPoolPrivate {
	shmemPoolQueue queue;
	int lock;
	int count;
	Class shmemClass;
	MTLIOAccelDevice* device;
	unsigned shmemSize;
} MTLIOAccelDeviceShmemPoolPrivate;

typedef struct {
	unsigned short buckets[64];
	unsigned numEntries;
	unsigned capacity;
	MTLResourceListEntry entries;
	MTLResourceListPool* pool;
	const esourceListQueue entry;
	unsigned long long time_added;
} SCD_Struct_MT44;

typedef struct MTLStencilDescriptorPrivate {
	unsigned long long stencilCompareFunction;
	unsigned long long stencilFailureOperation;
	unsigned long long depthFailureOperation;
	unsigned long long depthStencilPassOperation;
	unsigned readMask;
	unsigned writeMask;
} MTLStencilDescriptorPrivate;

typedef struct MTLDepthStencilDescriptorPrivate {
	MTLStencilDescriptorInternal* frontFaceStencil;
	MTLStencilDescriptorInternal* backFaceStencil;
	unsigned long long depthCompareFunction;
	BOOL depthWriteEnabled;
	NSString* label;
} MTLDepthStencilDescriptorPrivate;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

