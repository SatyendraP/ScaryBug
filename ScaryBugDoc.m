//
//  ScaryBugDoc.m
//  ScaryBugs
//
//  Created by satyendra on 12/06/15.
//  Copyright (c) 2015 satyendra. All rights reserved.
//

#import "ScaryBugDoc.h"
#import "ScaryBugData.h"

@implementation ScaryBugDoc
-(id)initWithTitle:(NSString *)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage
{
    
    
        // Added comment by Ashok
    if(self=[super init])
    {
        self.data = [[ScaryBugData alloc] initWithTitle:title rating:rating];
        self.thumbImage=thumbImage;
        self.fullImage=fullImage;
      NSLog(@"asdfjhkasdfjhaksdjfh");
    }
    return self;
    
}

@end
