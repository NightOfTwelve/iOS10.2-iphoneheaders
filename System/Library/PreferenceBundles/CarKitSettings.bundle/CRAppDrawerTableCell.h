/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/_CRCollectionTableCell.h>

@class CRGridPageDataSource;

@interface CRAppDrawerTableCell : _CRCollectionTableCell {

	CRGridPageDataSource* _dataSource;
	unsigned long long _rows;
	unsigned long long _columns;

}

@property (nonatomic,readonly) CRGridPageDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long rows;                        //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                     //@synthesize columns=_columns - In the implementation block
+(double)heightForDrawerWithColumns:(unsigned long long)arg1 iconCount:(unsigned long long)arg2 ;
-(void)configureWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 icons:(id)arg3 ;
-(CRGridPageDataSource *)dataSource;
-(unsigned long long)rows;
-(unsigned long long)columns;
@end

