/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRTextEditingSession.h>

@class NSString, MRTextEditingAttributes;

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (nonatomic,copy) NSString * text; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,retain) MRTextEditingAttributes * attributes; 
-(void)setText:(NSString *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setAttributes:(MRTextEditingAttributes *)arg1 ;
@end

