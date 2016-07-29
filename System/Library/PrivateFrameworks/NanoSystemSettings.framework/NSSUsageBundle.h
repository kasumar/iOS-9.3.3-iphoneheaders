/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSSUsageBundle : NSObject <NSSecureCoding> {

	BOOL _purgeable;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                           //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                   //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isPurgeable,nonatomic) BOOL purgeable;              //@synthesize purgeable=_purgeable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isPurgeable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSArray *)categories;
-(void)setPurgeable:(BOOL)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(unsigned long long)totalSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
@end

