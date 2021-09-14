//
//  PFURLSessionChallengeDelegate.h
//  Pods
//
//  Created by local on 9/13/21.
//

#import <Foundation/Foundation.h>

/**
 An interface to handle URLSessionDelegate challenges
 */
@protocol PFURLSessionChallengeDelegate <NSObject>

/**
 This is default URLSessionDelegate method that gets called when a challenge is received.
 
 Read URLSessionDelegate for more details.
 */
-(void)URLSession:(NSURLSession *_Nullable)session
didReceiveChallenge:(NSURLAuthenticationChallenge *_Nullable)challenge
completionHandler:(void (^_Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;

@end
