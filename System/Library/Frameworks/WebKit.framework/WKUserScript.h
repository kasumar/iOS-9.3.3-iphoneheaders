/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WKUserScript : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserScript> _userScript;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,readonly) long long injectionTime; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSString *)source;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Object*)_apiObject;
-(long long)injectionTime;
-(BOOL)isForMainFrameOnly;
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 ;
@end

