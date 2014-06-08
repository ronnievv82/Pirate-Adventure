//
//  RVTile.h
//  Pirate Adventure
//
//  Created by Ronnie VanVarden on 6/1/14.
//  Copyright (c) 2014 Ronnie VanVarden. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RVWeapon.h"
#import "RVArmor.h"

@interface RVTile : NSObject

@property (nonatomic, strong) NSString *story;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, strong) NSString *actionButtonName;


@end
