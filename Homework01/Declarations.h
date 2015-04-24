//
//  Declarations.h
//  Homework01
//
//  Created by Walter Gonzalez Domenzain on 23/04/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

//States and capitals
#define     nInitialStates      @"Jalisco", @"Sinaloa",@"Sonora",@"Nayarit",@"Michoacán",nil
#define     nInitialsCapitals   @"Guadalajara", @"Culiacán",@"Hermosillo",@"Tepic",@"Morelia",nil

//Cells features
#define     nCellStatesHeight   64


//Colors
#define     nBlackTransparency  colorWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.50

extern NSMutableArray *maStates;
extern NSMutableArray *maCapitals;

@interface Declarations : NSObject

@end
