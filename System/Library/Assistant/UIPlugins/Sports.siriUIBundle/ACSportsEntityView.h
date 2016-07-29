/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsDomainObjectView.h>

@class SASportsEntity;

@interface ACSportsEntityView : ACSportsDomainObjectView {

	SASportsEntity* _entity;

}

@property (nonatomic,retain) SASportsEntity * entity;              //@synthesize entity=_entity - In the implementation block
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSelectable;
-(void)setEntity:(SASportsEntity *)arg1 ;
-(SASportsEntity *)entity;
-(double)contentHeight;
@end

