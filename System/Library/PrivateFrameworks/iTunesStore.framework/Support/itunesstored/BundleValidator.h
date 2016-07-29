/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BundleValidator : NSObject {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _sourceURL;
	int _bundleFileType;

}

@property (assign,nonatomic) int bundleFileType;                     //@synthesize bundleFileType=_bundleFileType - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * sourceURL;                     //@synthesize sourceURL=_sourceURL - In the implementation block
-(id)_newBOMCopierOptions;
-(id)_createScratchDirectory;
-(BOOL)_extraMetaDataFromBOM:(id)arg1 error:(id*)arg2 ;
-(BOOL)_verifyBundleIdentfiier:(id)arg1 bundleVersion:(id)arg2 packagePath:(id)arg3 ;
-(void)_removeScratchDirectory:(id)arg1 ;
-(int)bundleFileType;
-(void)setBundleFileType:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
@end

