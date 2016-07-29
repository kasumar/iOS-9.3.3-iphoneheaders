/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaLibrary/MLChangeRequest.h>

@class MLEntity;

@interface MLUpdateEntityChangeRequest : MLChangeRequest {

	MLEntity* _entity;

}

@property (nonatomic,readonly) MLEntity * entity;              //@synthesize entity=_entity - In the implementation block
-(id)initWithEntity:(id)arg1 ;
-(MLEntity *)entity;
@end
