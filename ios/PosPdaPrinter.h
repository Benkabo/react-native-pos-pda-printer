
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNPosPdaPrinterSpec.h"

@interface PosPdaPrinter : NSObject <NativePosPdaPrinterSpec>
#else
#import <React/RCTBridgeModule.h>

@interface PosPdaPrinter : NSObject <RCTBridgeModule>
#endif

@end
