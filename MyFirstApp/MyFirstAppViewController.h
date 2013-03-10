//
//  MyFirstAppViewController.h
//  MyFirstApp
//
//  Created by Deepika T on 3/10/13.
//  Copyright (c) 2013 Deepika T. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyFirstAppViewController : UIViewController{
    
    IBOutlet UILabel *HelloWorldlbl;
    IBOutlet UILabel *UserLbl;
    IBOutlet UITextField *UserInput;
}
- (IBAction)userSubmitAction:(id)sender;
@property(nonatomic,strong) UILabel *UserLbl ;
@property(nonatomic,strong) UITextField *UserInput ;
@end
