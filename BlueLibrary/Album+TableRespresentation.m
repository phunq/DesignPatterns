//
//  Album+TableRespresentation.m
//  BlueLibrary
//
//  Created by Phu Nguyen on 3/20/14.
//  Copyright (c) 2014 Eli Ganem. All rights reserved.
//

#import "Album+TableRespresentation.h"

@implementation Album (TableRespresentation)

- (NSDictionary*)tr_tableRepresentation
{
    return @{@"titles":@[@"Artist", @"Album", @"Genre", @"Year"],
             @"values":@[self.artist, self.title, self.genre, self.year]};
}

@end
