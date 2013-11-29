#import <Foundation/Foundation.h>
#import "RoutingHTTPServer.h"

@interface Route : NSObject

#ifdef APPORTABLE
@property (nonatomic, strong) NSString *path;
#else
@property (nonatomic) NSRegularExpression *regex;
#endif
@property (nonatomic, copy) RequestHandler handler;

#if __has_feature(objc_arc_weak)
@property (nonatomic, weak) id target;
#else
@property (nonatomic, assign) id target;
#endif

@property (nonatomic, assign) SEL selector;
@property (nonatomic) NSArray *keys;

@end
