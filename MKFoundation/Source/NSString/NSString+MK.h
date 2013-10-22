//
//  NSString+MK.h
//  MKFoundation
//
//  Created by Michal Konturek on 11/07/2013.
//  Copyright (c) 2013 Michal Konturek. All rights reserved.
//

#import <Foundation/Foundation.h>

#define allTrim(object) [object stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]]

@interface NSString (MK)

+ (BOOL)isStringEmptyOrNil:(NSString *)value;

- (BOOL)isEmpty;

@end