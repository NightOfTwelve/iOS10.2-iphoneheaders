/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKRestrictedApplicationsChangeObserver.h>
#import <libobjc.A.dylib/NTKEditModeMapping.h>

@class NTKFaceConfiguration, NSHashTable, NSDictionary, NSMutableDictionary, NSString, NSArray;

@interface NTKFace : NSObject <NSSecureCoding, NSCopying, NTKRestrictedApplicationsChangeObserver, NTKEditModeMapping> {

	NTKFaceConfiguration* _configuration;
	NSHashTable* _observers;
	NSDictionary* _complicationSlotDescriptors;
	BOOL _editOptionsPrepared;
	NSMutableDictionary* _selectedSlotsByEditMode;
	BOOL _suppressingConfigurationChangeNotifications;
	BOOL _configurationChangedWhileSuppressingNotifications;
	BOOL _resourceDirectoryIsHardLink;
	BOOL _isLibraryFace;
	BOOL _beingEdited;
	long long _faceStyle;
	NSString* _resourceDirectory;
	long long _mostRecentEditMode;
	long long _complicationPickerStyle;

}

@property (assign,nonatomic) long long mostRecentEditMode;                                 //@synthesize mostRecentEditMode=_mostRecentEditMode - In the implementation block
@property (assign,nonatomic) BOOL beingEdited;                                             //@synthesize beingEdited=_beingEdited - In the implementation block
@property (nonatomic,readonly) NSArray * editModes; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isSingular,nonatomic,readonly) BOOL singular; 
@property (nonatomic,readonly) long long complicationPickerStyle;                          //@synthesize complicationPickerStyle=_complicationPickerStyle - In the implementation block
@property (nonatomic,readonly) long long editModeForCustomEditViewController; 
@property (nonatomic,readonly) long long faceStyle;                                        //@synthesize faceStyle=_faceStyle - In the implementation block
@property (nonatomic,readonly) NTKFaceConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * resourceDirectory;                               //@synthesize resourceDirectory=_resourceDirectory - In the implementation block
@property (assign,nonatomic) BOOL isLibraryFace;                                           //@synthesize isLibraryFace=_isLibraryFace - In the implementation block
@property (nonatomic,readonly) NSString * dailySnapshotKey; 
@property (nonatomic,readonly) BOOL wantsUnadornedSnapshot; 
@property (nonatomic,readonly) NSString * unadornedSnapshotKey; 
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_customEditModes;
+(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlot;
+(id)_localizedNameOverrideForCustomEditMode:(long long)arg1 ;
+(id)localizedNameForCustomEditMode:(long long)arg1 ;
+(id)fixedComplicationSlots;
+(id)_initialDefaultComplicationForSlot:(id)arg1 ;
+(long long)_customEditModeForUniqueConfiguration;
+(BOOL)_customEditModeIsShowSeconds:(long long)arg1 ;
+(id)_dateComplicationSlot;
+(unsigned long long)_dateComplicationSlotSupportedStyles;
+(id)_linkedResourceRootDirectory;
+(BOOL)_customEditModeIsColor:(long long)arg1 ;
+(BOOL)_customEditModeIsPosition:(long long)arg1 ;
+(BOOL)customEditModeIsColor:(long long)arg1 ;
+(BOOL)customEditModeIsPosition:(long long)arg1 ;
+(BOOL)customEditModeIsShowSeconds:(long long)arg1 ;
+(id)_monogramComplicationSlot;
+(Class)_faceClassForStyle:(long long)arg1 ;
+(id)_sampleFaceDifferentFromFaces:(id)arg1 ;
+(id)defaultFaceOfStyle:(long long)arg1 ;
+(id)_slotsForCustomEditMode:(long long)arg1 ;
+(BOOL)_complication:(id)arg1 isValidForSlot:(id)arg2 ;
+(id)_defaultSelectedSlotForCustomEditMode:(long long)arg1 ;
+(id)customEditModes;
+(id)sampleFaceOfStyle:(long long)arg1 differentFromFaces:(id)arg2 ;
+(unsigned long long)maximumRemoteComplicationsOnAnyFace;
+(id)dateSlot;
+(id)monogramSlot;
+(id)faceWithJSONObjectRepresentation:(id)arg1 ;
+(id)PPTBlankFace;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)addObserver:(id)arg1 ;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_commonInit;
-(NTKFaceConfiguration *)configuration;
-(BOOL)_allowsEditing;
-(void)prepareForDeletion;
-(id)faceDescription;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(NSString *)resourceDirectory;
-(id)_orderedComplicationSlots;
-(id)_localizedNameForComplicationSlot:(id)arg1 ;
-(long long)complicationPickerStyle;
-(id)_resourceDirectorySnapshotKey;
-(BOOL)_hasOptionsForCustomEditMode:(long long)arg1 ;
-(id)selectedOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)setResourceDirectoryByHardLinkingDirectory:(id)arg1 ;
-(long long)editModeForCustomEditViewController;
-(BOOL)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3 ;
-(void)_updateForResourceDirectoryChange;
-(long long)faceStyle;
-(NSString *)dailySnapshotKey;
-(BOOL)wantsUnadornedSnapshot;
-(NSString *)unadornedSnapshotKey;
-(id)complicationForSlot:(id)arg1 ;
-(void)enumerateComplicationSlotsWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)editModes;
-(void)setBeingEdited:(BOOL)arg1 ;
-(id)slotsForCustomEditMode:(long long)arg1 ;
-(id)selectedSlotForEditMode:(long long)arg1 ;
-(void)enumerateSlotsForCustomEditMode:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)enumerateCustomEditModesWithBlock:(/*^block*/id)arg1 ;
-(void)setResourceDirectory:(NSString *)arg1 ;
-(void)selectOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)allowedComplicationsForSlot:(id)arg1 ;
-(void)setComplication:(id)arg1 forSlot:(id)arg2 ;
-(unsigned long long)indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)setSelectedSlot:(id)arg1 forEditMode:(long long)arg2 ;
-(long long)complicationFamilyForSlot:(id)arg1 ;
-(BOOL)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(BOOL)isSingular;
-(BOOL)_wantsUnadornedSnapshot;
-(void)_selectDefaultSlots;
-(void)_updateComplicationTombstones;
-(void)_deleteResourceDirectoryHardLinkIfNecessary;
-(void)_setResourceDirectory:(id)arg1 ;
-(id)_sortedComplicationSlots;
-(BOOL)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2 ;
-(id)_defaultName;
-(void)_notifyObserversFaceConfigurationDidChange;
-(void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4 ;
-(id)nameOfSelectedOptionForCustomEditMode:(long long)arg1 ;
-(void)prepareEditOptions;
-(void)cleanupEditOptions;
-(id)allowedComplicationsForSlot:(id)arg1 includingComplication:(id)arg2 ;
-(unsigned long long)allowedComplicationTypesForSlot:(id)arg1 ;
-(id)_allowedComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2 ;
-(BOOL)_hasCustomSwitcherSelectionAction;
-(void)_performCustomSwitcherSelectionAction;
-(void)applyDefaultConfiguration;
-(BOOL)_applyConfiguration:(id)arg1 allowFailure:(BOOL)arg2 ;
-(void)applyDefaultComplicationConfiguration;
-(id)_defaultComplicationOfType:(unsigned long long)arg1 forSlot:(id)arg2 ;
-(void)_prepareEditOptions;
-(void)_cleanupEditOptions;
-(void)_prepareForDeletion;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)_configurationFromOldEncodingWithCoder:(id)arg1 ;
-(id)_complicationMigrationPaths;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
-(void)restrictedApplicationsDidChange;
-(BOOL)_verifyCompatibilityOfConfiguration:(id)arg1 ;
-(BOOL)_option:(id)arg1 isValidForCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(Class)editOptionClassFromEditMode:(long long)arg1 ;
-(void)_notifyObserversOptionsDidChangeForEditMode:(long long)arg1 ;
-(id)selectedOptionsForCustomEditModes;
-(id)namesOfSelectedOptionsForCustomEditModes;
-(id)editOptionsForCustomEditModes;
-(void)clearComplicationTombstones;
-(BOOL)hasComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2 ;
-(BOOL)hasCustomSwitcherSelectionAction;
-(void)performCustomSwitcherSelectionAction;
-(BOOL)applyConfiguration:(id)arg1 ;
-(void)applyUniqueConfigurationWithExistingFaces:(id)arg1 ;
-(BOOL)isEquivalentToFace:(id)arg1 ;
-(id)orderedComplicationSlots;
-(id)displayNameForComplicationSlot:(id)arg1 ;
-(void)didMoveToLibrary;
-(id)JSONObjectRepresentation;
-(BOOL)isLibraryFace;
-(void)setIsLibraryFace:(BOOL)arg1 ;
-(long long)mostRecentEditMode;
-(void)setMostRecentEditMode:(long long)arg1 ;
-(BOOL)beingEdited;
-(id)_faceDescription;
-(id)_faceDescriptionKey;
-(id)_faceDescriptionForLibrary;
-(id)_faceDescriptionKeyForLibrary;
-(id)faceDescriptionForLibrary;
@end

