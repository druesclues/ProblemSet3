//
//  Header.h
//  Shape
//
//  Created by Drue Thomas on 8/13/15.
//  Copyright (c) 2015 Drue Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Shape.h"

@interface Square : Shape

- (BOOL) isItSquare
{
    if((self.lengthInFeet) != (self.heightInFeet))
        return 
}