#ifndef STASH_VERSIONS_H
#define STASH_VERSIONS_H

#import <version.h>

// 10.2.1 not in Theos header — needed for the arm64/APFS boundary
#ifndef kCFCoreFoundationVersionNumber_iOS_10_2_1
#define kCFCoreFoundationVersionNumber_iOS_10_2_1 1349.13
#endif

// 10.3.4 not in Theos header — last 32-bit iOS release
#ifndef kCFCoreFoundationVersionNumber_iOS_10_3_4
#define kCFCoreFoundationVersionNumber_iOS_10_3_4 1349.70
#endif

// arm64 devices got APFS on iOS 10.3+, so cap at 10.2.1.
// armv7 (32-bit) stayed on HFS+ through 10.3.4.
#ifdef __LP64__
#define kCFCoreFoundationVersionNumber_iOS_MaxSupported kCFCoreFoundationVersionNumber_iOS_10_2_1
#else
#define kCFCoreFoundationVersionNumber_iOS_MaxSupported kCFCoreFoundationVersionNumber_iOS_10_3_4
#endif

#endif
