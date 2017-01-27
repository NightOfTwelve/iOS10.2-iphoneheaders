/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>
#import <libobjc.A.dylib/MKActivityItemSource.h>

@class CNContact, NSString;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider <MKActivityItemSource> {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;                   //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 ;
-(void)_setRecord:(void*)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
@end
