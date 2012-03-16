//
//  ViewController.h
//  Aula1
//
//  Created by Thais Camilo on 3/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    UILabel *labelTexto;
}

@property(nonatomic, retain) IBOutlet UILabel *labelTexto;

-(IBAction)botaPressionado:(id)sender;

@end
