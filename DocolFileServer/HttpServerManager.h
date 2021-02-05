//
//  HttpServerManager.h
//  maiba
//
//  Created by seentech_5 on 15/12/8.
//  Copyright © 2015年 seenvoice.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HttpServerManager : NSObject
@property(nonatomic,strong,readonly) NSString * hostName;
@property(nonatomic,assign,readonly) long port;
+ (HttpServerManager *)shareObject;
- (void)startHttpServer:(NSString*)dir port:(long)port completion:(void(^)(NSError * error))completion;
- (void)stopHttpServer;
- (NSString *)buildUrlForResource:(NSString *)fileAndPath;
@end
