//
//  UserSession.h
//  AHAcleveland
//
//  Created by AnyaTheMac on 7/20/13.
//  Copyright (c) 2013 Bill Davis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserSession : NSObject

+ (NSString*) getEmail;
+ (BOOL) setEmail:(NSString*)email;

@end
