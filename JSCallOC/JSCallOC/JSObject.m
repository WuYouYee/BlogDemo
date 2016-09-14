//
//  JSObject.m
//  JSOC
//
//  Created by 吴頔 on 16/9/14.
//  Copyright © 2016年 wuyouyee. All rights reserved.
//

#import "JSObject.h"

@implementation JSObject
- (NSString *)getValueWithString:(NSString *)string{
    
    return [NSString stringWithFormat:@"通过了oc原生代码 %@",string];
}

- (void)CallJSFunWithString:(NSString *)string{
    JSValue *value = self.jsContext[@"jsParamFunc"];
    [value callWithArguments:@[string]];
}
@end
