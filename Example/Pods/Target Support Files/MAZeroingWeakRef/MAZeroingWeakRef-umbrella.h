#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MANotificationCenterAdditions.h"
#import "MAWeakArray.h"
#import "MAWeakDictionary.h"
#import "MAZeroingWeakProxy.h"
#import "MAZeroingWeakRef.h"

FOUNDATION_EXPORT double MAZeroingWeakRefVersionNumber;
FOUNDATION_EXPORT const unsigned char MAZeroingWeakRefVersionString[];

