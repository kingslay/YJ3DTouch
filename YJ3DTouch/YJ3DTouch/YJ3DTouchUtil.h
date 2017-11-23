//
//  YJ3DTouchUtil.h
//  YJ3DTouch
//
//  Created by hyman on 2017/4/1.
//  Copyright © 2017年 hyman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface YJ3DTouchUtil : NSObject

+ (void)safeSwizzleOriginMethod:(SEL)origSel withTargetMethod:(SEL)altSel forClass:(Class)cls;

+ (BOOL)hasSwizzledForTarget:(id)object swizzleSelector:(SEL)selector;
+ (void)setHasSwizzled:(BOOL)swizzled forTarget:(id)object swizzleSelector:(SEL)selector;

+ (void)dynamicProcessClass:(Class)cls oriSel:(SEL)oriSel altSel:(SEL)altSel oriImp:(IMP)oriImp altImp:(IMP)altImp;

@end
