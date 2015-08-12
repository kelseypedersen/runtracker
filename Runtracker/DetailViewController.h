//
//  DetailViewController.h
//  Runtracker
//
//  Created by Kelsey Pedersen on 8/12/15.
//  Copyright (c) 2015 Kelsey Pedersen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

