/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKPlaceSectionRowView;

@interface MKPlaceInfoRow : NSObject {

	unsigned long long _type;
	MKPlaceSectionRowView* _rowView;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) MKPlaceSectionRowView * rowView;              //@synthesize rowView=_rowView - In the implementation block
+(id)infoRow:(id)arg1 ofType:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(MKPlaceSectionRowView *)rowView;
@end

