/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPIdentifiedDataRepresentation <NSObject>
@optional
-(void)setFileStateIdentifier:(id)arg1;
-(BOOL)fromExternalReference;
-(void)setRelativeDataPath:(id)arg1;

@required
-(BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3;
-(long long)identifier;
-(BOOL)isLoaded;

@end

