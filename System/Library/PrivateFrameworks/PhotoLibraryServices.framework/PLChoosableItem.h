/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLChoosableItem : NSObject {

	int _width;
	int _height;
	int _type;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,readonly) int width;                                     //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
+(id)choosableItemsFromCloudResources:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(int)width;
-(int)height;
-(id)initWithWidth:(int)arg1 height:(int)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4 ;
-(id)initWithCloudResource:(id)arg1 ;
-(BOOL)isEqualToChoosableItem:(id)arg1 ;
-(long long)compareUsingWidth:(id)arg1 ;
-(NSString *)uniformTypeIdentifier;
@end

