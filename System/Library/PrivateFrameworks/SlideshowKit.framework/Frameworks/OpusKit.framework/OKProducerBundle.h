/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSBundle, NSDictionary, NSString;

@interface OKProducerBundle : NSObject {

	NSURL* _url;
	NSBundle* _bundle;
	NSDictionary* _infoDictionary;
	unsigned long long _type;
	NSString* _bundleExtension;

}

@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * bundleExtension;              //@synthesize bundleExtension=_bundleExtension - In the implementation block
-(void)dealloc;
-(id)init;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)infoDictionary;
-(id)identifier;
-(id)url;
-(unsigned long long)type;
-(id)bundle;
-(double)version;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2 ;
-(NSString *)bundleExtension;
-(void)setBundleExtension:(NSString *)arg1 ;
@end

