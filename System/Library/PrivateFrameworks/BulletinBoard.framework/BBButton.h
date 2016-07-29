/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/BBUniquableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBImage, BBAction, NSData;

@interface BBButton : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {

	NSString* _title;
	BBImage* _image;
	BBAction* _action;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * glyphData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3 ;
+(id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4 ;
+(id)_possiblyCachedButtonForInitializedButton:(id)arg1 ;
+(void)_removeButtonFromCache:(id)arg1 ;
+(id)buttonWithTitle:(id)arg1 action:(id)arg2 ;
+(id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4 ;
-(void)setImage:(BBImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(BBAction *)action;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BBImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAction:(BBAction *)arg1 ;
-(id)uniqueIdentifier;
-(NSData *)glyphData;
@end

