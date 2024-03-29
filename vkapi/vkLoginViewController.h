//
//  vkLoginViewController.h
//  VKAPI
//
//  Created by Zhenia Tulusha on 25.11.11.
//  Copyright (c) 2011 DIMALEX LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface vkLoginViewController : UIViewController <UIWebViewDelegate> {
    
    id delegate;
    UIWebView *vkWebView;
    NSString *appID;
    
}
@property (nonatomic, retain) id delegate;
@property (nonatomic, retain) UIWebView *vkWebView;
@property (nonatomic, retain) NSString *appID;

- (NSString*)stringBetweenString:(NSString*)start 
                       andString:(NSString*)end 
                     innerString:(NSString*)str;
@end
