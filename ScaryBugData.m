//
//  ScaryBugData.m
//  ScaryBugs
//
//  Created by satyendra on 12/06/15.
//  Copyright (c) 2015 satyendra. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData
-(id)initWithTitle:(NSString *)title rating:(float)rating
{
    if(self = [super init])
    {
        self.title=title;
        self.rating=rating;
    }
    return self;
    
}

@end
