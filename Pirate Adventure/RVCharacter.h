//
//  RVCharacter.h
//  Pirate Adventure
//
//  Created by Ronnie Van Varden on 6/7/14.
//  Copyright (c) 2014 Ronnie VanVarden. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RVArmor.h"
#import "RVWeapon.h"

@interface RVCharacter : NSObject

@property (nonatomic) int damage;
@property (nonatomic) int health;
@property (strong, nonatomic) RVArmor *armor;
@property (strong, nonatomic) RVWeapon *weapon;

@end
