//
//  Album+TableRespresentation.h
//  BlueLibrary
//
//  Created by Phu Nguyen on 3/20/14.
//  Copyright (c) 2014 Eli Ganem. All rights reserved.
//

#import "Album.h"

@interface Album (TableRespresentation)

- (NSDictionary*)tr_tableRepresentation;

@end
