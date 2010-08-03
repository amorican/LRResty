//
//  LRRestClientDelegate.h
//  LRResty
//
//  Created by Luke Redpath on 03/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LRRestyClient;

@protocol LRRestyClientDelegate <NSObject>

- (void)restClient:(LRRestyClient *)client receivedResponse:(id)response;

@end
