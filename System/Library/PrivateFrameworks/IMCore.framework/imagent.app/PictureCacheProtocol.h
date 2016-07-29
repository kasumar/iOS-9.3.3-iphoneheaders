/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PictureCacheProtocol
@required
-(void)syncMapFile;
-(id)pictureCachePath;
-(id)picturePathForKey:(id)arg1;
-(void)addKey:(id)arg1 toName:(id)arg2 inService:(id)arg3;
-(id)keyForName:(id)arg1 inService:(id)arg2;
-(void)markName:(id)arg1 asDirty:(BOOL)arg2;
-(id)hashForCustomKey:(id)arg1;
-(id)pictureForKey:(id)arg1;
-(BOOL)hasPictureForKey:(id)arg1;
-(id)addPicture:(id)arg1 toName:(id)arg2 inService:(id)arg3;
-(void)removeName:(id)arg1 inService:(id)arg2;
-(void)addCustomKey:(id)arg1 forHash:(id)arg2;
-(id)pictureForCustomKey:(id)arg1;
-(BOOL)nameIsDirty:(id)arg1;
-(void)pruneCache;
-(void)flushCache;
-(void)writePictureCache;

@end
