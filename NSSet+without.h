#import <Foundation/NSSet.h>

@interface NSSet (YOLOWithout)

/**
 Returns a new array where objects in the given array are removed from
 the receiver.

    id rv = @[@1, @2, @3, @4, @5, @6].without(@2);
    // rv => @[@1, @3, @4, @5, @6]

    id rv = @[@1, @2, @3, @4, @5, @6].without(@[@2, @3]);
    // rv => @[@1, @4, @5, @6]
*/
- (NSSet *(^)(id arrayOrSetOrObject))without;

@end
