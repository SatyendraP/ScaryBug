//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by satyendra on 12/06/15.
//  Copyright (c) 2015 satyendra. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property(strong) NSString *title;
@property(assign) float rating;

-(id)initWithTitle:(NSString*) title rating:(float)rating;

@end
