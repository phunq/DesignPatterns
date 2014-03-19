//
//  Album.h
//  BlueLibrary
//
//  Created by Phu Nguyen on 3/19/14.
//  Copyright (c) 2014 Eli Ganem. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Album : NSObject

@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSString *artist;
@property (nonatomic, copy, readonly) NSString *genre;
@property (nonatomic, copy, readonly) NSString *coverUrl;
@property (nonatomic, copy, readonly) NSString *year;

- (id)initWithTitle:(NSString*)title artist:(NSString*)artist coverUrl:(NSString*)coverUrl year:(NSString*)year;

@end
