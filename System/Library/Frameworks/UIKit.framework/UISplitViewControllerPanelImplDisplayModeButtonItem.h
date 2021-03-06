/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>

@class UISplitViewControllerPanelImpl;

@interface UISplitViewControllerPanelImplDisplayModeButtonItem : UIBarButtonItem {

	BOOL _wasAddedToNavigationItem;
	UISplitViewControllerPanelImpl* _panelImpl;

}

@property (assign,setter=_setPanelImpl:,getter=_panelImpl,nonatomic,__weak) UISplitViewControllerPanelImpl * panelImpl;                        //@synthesize panelImpl=_panelImpl - In the implementation block
@property (assign,setter=_setWasAddedToNavigationItem:,getter=_wasAddedToNavigationItem,nonatomic) BOOL wasAddedToNavigationItem;              //@synthesize wasAddedToNavigationItem=_wasAddedToNavigationItem - In the implementation block
-(void)_setOwningNavigationItem:(id)arg1 ;
-(id)_panelImpl;
-(void)_setPanelImpl:(id)arg1 ;
-(BOOL)_wasAddedToNavigationItem;
-(void)_setWasAddedToNavigationItem:(BOOL)arg1 ;
@end

