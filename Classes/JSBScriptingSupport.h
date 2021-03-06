//
//  JSVScriptingSupport.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSContext+JavaScriptBridge.h"

@import JavaScriptCore;

@protocol JSBScriptingSupport <JSExport>

@required
+ (JSContext *)globalContext;

JSExportAs(defineClass,
+ (id)defineClass:(NSString *)declaration
  instanceMembers:(JSValue *)instanceMembers
    staticMembers:(JSValue *)staticMembers
);

JSExportAs(require,
+ (id)require:(NSString *)name
);

@optional
JSExportAs(dump,
+ (void)dump:(id)object
);

@end

@interface JSBScriptingSupport : NSObject <JSBScriptingSupport>

+ (JSContext *)globalContext;

@end
