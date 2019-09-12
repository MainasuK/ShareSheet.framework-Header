/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIActivityMatchingResults : NSObject {
    _UIActivityMatchingContext * _context;
    NSMutableSet * _excludedActivityTypesSet;
    NSArray * _orderedActivities;
}

@property (nonatomic, readonly) _UIActivityMatchingContext *context;
@property (nonatomic, readonly) NSArray *excludedActivityTypes;
@property (nonatomic, retain) NSArray *orderedActivities;

- (void).cxx_destruct;
- (void)addExcludedActivityTypes:(id)arg1;
- (id)context;
- (id)excludedActivityTypes;
- (id)initWithActivityMatchingContext:(id)arg1;
- (id)orderedActivities;
- (void)setOrderedActivities:(id)arg1;

@end
