/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying> {

	BOOL _shouldMoveFile;
	NSString* _originalFilename;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy) NSString * originalFilename;                   //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldMoveFile;                         //@synthesize shouldMoveFile=_shouldMoveFile - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originalFilename;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(BOOL)shouldMoveFile;
-(void)setShouldMoveFile:(BOOL)arg1 ;
-(NSString *)uniformTypeIdentifier;
@end

