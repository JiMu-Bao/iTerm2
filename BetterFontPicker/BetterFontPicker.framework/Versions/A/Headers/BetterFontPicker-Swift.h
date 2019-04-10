// Generated by Apple Swift version 5.0 (swiftlang-1001.0.69.5 clang-1001.0.46.3)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AppKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BetterFontPicker",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class BFPMainViewController;

SWIFT_PROTOCOL_NAMED("MainViewControllerDelegate")
@protocol BFPMainViewControllerDelegate
- (void)mainViewController:(BFPMainViewController * _Nonnull)mainViewController didSelectFontWithName:(NSString * _Nonnull)name;
@end

@protocol BFPAffordanceDelegate;
@class NSCoder;
@class NSMenu;
@class NSEvent;

SWIFT_CLASS_NAMED("Affordance")
@interface BFPAffordance : NSPopUpButton <BFPMainViewControllerDelegate>
@property (nonatomic, weak) id <BFPAffordanceDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nonnull title;
- (nonnull instancetype)initWithFrame:(NSRect)buttonFrame pullsDown:(BOOL)flag OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)willOpenMenu:(NSMenu * _Nonnull)menu withEvent:(NSEvent * _Nonnull)event;
- (void)mainViewController:(BFPMainViewController * _Nonnull)mainViewController didSelectFontWithName:(NSString * _Nonnull)name;
@end


SWIFT_PROTOCOL_NAMED("AffordanceDelegate")
@protocol BFPAffordanceDelegate
- (void)affordance:(BFPAffordance * _Nonnull)affordance didSelectFontFamily:(NSString * _Nonnull)fontFamily;
@end

@protocol BFPFontFamilyMemberPickerViewDelegate;

SWIFT_CLASS_NAMED("FontFamilyMemberPickerView")
@interface BFPFontFamilyMemberPickerView : NSPopUpButton
@property (nonatomic, weak) id <BFPFontFamilyMemberPickerViewDelegate> _Nullable delegate;
- (nonnull instancetype)initWithFrame:(NSRect)buttonFrame pullsDown:(BOOL)flag OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)didChange:(id _Nullable)sender;
@end


SWIFT_PROTOCOL_NAMED("FontFamilyMemberPickerViewDelegate")
@protocol BFPFontFamilyMemberPickerViewDelegate <NSObject>
- (void)fontFamilyMemberPickerView:(BFPFontFamilyMemberPickerView * _Nonnull)fontFamilyMemberPickerView didSelectFontName:(NSString * _Nonnull)name;
@end


SWIFT_CLASS_NAMED("FontListTableView")
@interface BFPFontListTableView : NSTableView
- (void)keyDown:(NSEvent * _Nonnull)event;
- (void)mouseDown:(NSEvent * _Nonnull)event;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class BFPSizePickerView;

SWIFT_PROTOCOL_NAMED("SizePickerViewDelegate")
@protocol BFPSizePickerViewDelegate <NSObject>
- (void)sizePickerView:(BFPSizePickerView * _Nonnull)sizePickerView didChangeSizeTo:(NSInteger)size;
@end

@protocol BFPCompositeViewDelegate;
@class NSFont;

SWIFT_CLASS_NAMED("FontPickerCompositeView")
@interface BFPCompositeView : NSView <BFPAffordanceDelegate, BFPFontFamilyMemberPickerViewDelegate, BFPSizePickerViewDelegate>
@property (nonatomic, weak) id <BFPCompositeViewDelegate> _Nullable delegate;
@property (nonatomic, readonly, strong) BFPAffordance * _Nonnull affordance;
@property (nonatomic, readonly, strong) BFPSizePickerView * _Nullable horizontalSpacing;
@property (nonatomic, readonly, strong) BFPSizePickerView * _Nullable verticalSpacing;
@property (nonatomic, strong) NSFont * _Nullable font;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (void)resizeSubviewsWithOldSize:(NSSize)oldSize;
- (BFPSizePickerView * _Nonnull)addHorizontalSpacingAccessoryWithInitialValue:(NSInteger)initialValue SWIFT_WARN_UNUSED_RESULT;
- (BFPSizePickerView * _Nonnull)addVerticalSpacingAccessoryWithInitialValue:(NSInteger)initialValue SWIFT_WARN_UNUSED_RESULT;
- (void)affordance:(BFPAffordance * _Nonnull)affordance didSelectFontFamily:(NSString * _Nonnull)fontFamily;
- (void)fontFamilyMemberPickerView:(BFPFontFamilyMemberPickerView * _Nonnull)fontFamilyMemberPickerView didSelectFontName:(NSString * _Nonnull)name;
- (void)sizePickerView:(BFPSizePickerView * _Nonnull)sizePickerView didChangeSizeTo:(NSInteger)size;
@end


SWIFT_PROTOCOL_NAMED("FontPickerCompositeViewDelegate")
@protocol BFPCompositeViewDelegate <NSObject>
- (void)fontPickerCompositeView:(BFPCompositeView * _Nonnull)view didSelectFont:(NSFont * _Nonnull)font;
@end


SWIFT_CLASS("_TtC16BetterFontPicker15FontPickerPanel")
@interface FontPickerPanel : NSPanel
@property (nonatomic, readonly) BOOL canBecomeKeyWindow;
- (void)cancelOperation:(id _Nullable)sender;
- (void)resignKeyWindow;
- (nonnull instancetype)initWithContentRect:(NSRect)contentRect styleMask:(NSWindowStyleMask)style backing:(NSBackingStoreType)backingStoreType defer:(BOOL)flag OBJC_DESIGNATED_INITIALIZER;
@end

@class NSSearchField;
@class NSBundle;

SWIFT_CLASS_NAMED("MainViewController")
@interface BFPMainViewController : NSViewController <NSTextFieldDelegate>
@property (nonatomic, weak) IBOutlet BFPFontListTableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet NSSearchField * _Null_unspecified searchField;
@property (nonatomic, weak) IBOutlet id <BFPMainViewControllerDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithNibName:(NSNibName _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)awakeFromNib;
- (void)controlTextDidChange:(NSNotification * _Nonnull)obj;
- (void)viewWillAppear;
@end


@class NSTextField;

SWIFT_CLASS_NAMED("SizePickerView")
@interface BFPSizePickerView : NSView <NSTextFieldDelegate>
@property (nonatomic, weak) id <BFPSizePickerViewDelegate> _Nullable delegate;
@property (nonatomic) NSInteger size;
@property (nonatomic, readonly) NSSize fittingSize;
@property (nonatomic, readonly, strong) NSTextField * _Nonnull textField;
- (void)clampWithMin:(NSInteger)min max:(NSInteger)max;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (void)resizeSubviewsWithOldSize:(NSSize)oldSize;
- (void)stepper:(id _Nullable)sender;
- (void)controlTextDidEndEditing:(NSNotification * _Nonnull)obj;
- (void)controlTextDidChange:(NSNotification * _Nonnull)obj;
@end


@class NSTableRowView;
@class NSTableColumn;

SWIFT_CLASS_NAMED("TableViewController")
@interface BFPTableViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLayout;
- (NSInteger)numberOfRowsInTableView:(NSTableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSTableRowView * _Nullable)tableView:(NSTableView * _Nonnull)tableView rowViewForRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (NSView * _Nullable)tableView:(NSTableView * _Nonnull)tableView viewForTableColumn:(NSTableColumn * _Nullable)tableColumn row:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(NSTableView * _Nonnull)tableView heightOfRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (BOOL)tableView:(NSTableView * _Nonnull)tableView shouldSelectRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (void)tableViewSelectionDidChange:(NSNotification * _Nonnull)notification;
- (nonnull instancetype)initWithNibName:(NSNibName _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
