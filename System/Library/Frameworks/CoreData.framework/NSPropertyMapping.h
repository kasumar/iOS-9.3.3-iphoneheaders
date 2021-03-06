/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject {

	void* _reserved;
	NSArray* _transformValidations;
	NSArray* _propertyTransforms;
	NSString* _name;
	NSExpression* _valueExpression;
	NSDictionary* _userInfo;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedPropertyMapping : 31;
	}  _propertyMappingFlags;

}

@property (copy) NSString * name; 
@property (retain) NSExpression * valueExpression; 
@property (retain) NSDictionary * userInfo; 
+(void)initialize;
-(void)_setPropertyTransforms:(id)arg1 ;
-(void)_setTransformValidations:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(BOOL)arg1 ;
-(id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2 ;
-(id)_propertyTransforms;
-(id)_transformValidations;
-(id)initWithName:(id)arg1 valueExpression:(id)arg2 ;
-(BOOL)isEditable;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(NSExpression *)valueExpression;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
@end

