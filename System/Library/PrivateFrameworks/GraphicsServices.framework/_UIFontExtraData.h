/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GraphicsServices/GraphicsServices-Structs.h>
@class NSData, NSCharacterSet;

@interface _UIFontExtraData : NSObject {

	NSData* _latin1MappingTable;
	NSCharacterSet* _coveredCharacterSet;
	double _ascender;
	double _descender;
	double _lineHeight;
	double _lineGap;
	struct {
		unsigned _initialized : 1;
		unsigned _isSystemFont : 1;
		unsigned _hasKernPair : 1;
		unsigned _checkedLatin1Table : 1;
		unsigned _isIBTextStyleFont : 1;
	}  _fFlags;

}
-(void)dealloc;
@end

