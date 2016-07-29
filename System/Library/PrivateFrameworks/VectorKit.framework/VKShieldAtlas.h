/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMapTable, NSLock, VKPShieldPack;

@interface VKShieldAtlas : NSObject {

	NSMapTable* _atlasToImages;
	NSLock* _atlasToImagesLock;
	VKPShieldPack* _shieldPack;

}
-(void)dealloc;
-(void)purge;
-(id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 numberOfLines:(unsigned long long)arg5 genericShieldGenerator:(id)arg6 colors:(SCD_Struct_VK82*)arg7 ;
-(id)initWithShieldPack:(id)arg1 ;
@end

