/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBIconStateArchiver : NSObject
+(id)modernizeRootArchive:(id)arg1 ;
+(id)leafIdentifiersFromArchive:(id)arg1 ;
+(id)unarchive:(id)arg1 withIconSource:(id)arg2 ;
+(id)indexPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2 ;
+(id)archive:(id)arg1 ;
+(id)archiveRootFolder:(id)arg1 ;
+(id)iTunesRepresentationFromRootArchive:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)rootArchiveFromITunesRepresentation:(id)arg1 ;
+(id)_representationForNode:(id)arg1 ;
+(id)_nodeFromRepresentation:(id)arg1 context:(id)arg2 ;
+(id)_modernIconListsForLists:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_modernIconListForList:(id)arg1 allowFolders:(BOOL)arg2 ;
+(void)_addLeafNodesForNode:(id)arg1 toSet:(id)arg2 ;
+(id)_pathForNode:(id)arg1 toIdentifier:(id)arg2 ;
+(id)_iTunesIconListForList:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)_iTunesIconListsForLists:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2 ;
+(id)_newFolderIconForFolder:(id)arg1 ;
+(id)_representationForFolder:(id)arg1 ;
+(id)_representationForIcon:(id)arg1 ;
+(id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2 ;
+(Class)_folderClassForFolderType:(id)arg1 context:(id)arg2 ;
+(id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned long long)arg2 context:(id)arg3 overflow:(id)arg4 ;
+(id)_folderTypeForFolder:(id)arg1 ;
+(id)_representationForList:(id)arg1 ;
+(id)_migrateLeafIdentifierIfNecessary:(id)arg1 ;
+(id)_modernIconCellForCell:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_iTunesIconCellForCell:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)_iTunesDictionaryForLeafIcon:(id)arg1 ;
+(id)_iTunesDictionaryForDownloadingIcon:(id)arg1 ;
+(id)_iTunesDictionaryForLeafIdentifier:(id)arg1 ;
@end

