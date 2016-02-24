//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by satyendra on 10/06/15.
//  Copyright (c) 2015 satyendra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RWTRateView.h"
#import "RWTUIImageExtras.h"

@class ScaryBugDoc;

@interface DetailViewController : UIViewController<UITextFieldDelegate,RWTRateViewDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (strong, nonatomic) ScaryBugDoc *detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet UITextField *titleField;

@property (weak, nonatomic) IBOutlet RWTRateView *rateView;

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (strong, nonatomic) IBOutlet UIImagePickerController *picker;

- (IBAction)addPictureTapped:(id)sender;

- (IBAction)titleFieldTextChanged:(id)sender;


@end

