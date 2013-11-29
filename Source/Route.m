#import "Route.h"

@implementation Route

#ifdef APPORTABLE
@synthesize path;
#else
@synthesize regex;
#endif
@synthesize handler;
@synthesize target;
@synthesize selector;
@synthesize keys;

@end
