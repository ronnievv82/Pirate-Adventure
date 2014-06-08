//
//  RVFactory.h
//  Pirate Adventure
//
//  Created by Ronnie VanVarden on 6/1/14.
//  Copyright (c) 2014 Ronnie VanVarden. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RVCharacter.h"

@interface RVFactory : NSObject

-(NSArray *)tiles;
-(RVCharacter *)character;

@end
