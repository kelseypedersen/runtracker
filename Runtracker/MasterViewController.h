//
//  MasterViewController.h
//  Runtracker
//
//  Created by Kelsey Pedersen on 8/12/15.
//  Copyright (c) 2015 Kelsey Pedersen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

