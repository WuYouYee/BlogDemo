//
//  JSObject.h
//  JSOC
//
//  Created by 吴頔 on 16/9/14.
//  Copyright © 2016年 wuyouyee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <UIKit/UIKit.h>

@protocol JSDelegate <JSExport>

- (NSString *)getValueWithString:(NSString *)string;

- (void)CallJSFunWithString:(NSString *)string;
@end

@interface JSObject : NSObject<JSDelegate>
@property (nonatomic, weak) UIWebView *webView;
@property (nonatomic, weak) JSContext *jsContext;
@end
