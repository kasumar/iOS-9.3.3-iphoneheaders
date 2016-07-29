/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader {

	OCCDecryptor* mDecryptor;

}

@property (nonatomic,readonly) OCCDecryptor * decryptor; 
-(void)restartReaderToUseDecryptedDocument;
-(id)defaultPassphrase;
-(void)dealloc;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(OCCDecryptor *)decryptor;
-(void)useUnencryptedDocument;
@end

