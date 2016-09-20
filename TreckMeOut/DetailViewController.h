//
//  DetailViewController.h
//  TreckMeOut
//
//  Created by Eric M Oliveira on 20/09/16.
//  Copyright © 2016 Eric M Oliveira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

