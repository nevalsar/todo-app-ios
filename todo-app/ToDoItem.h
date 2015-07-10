//
//  ToDoItem.h
//  todo-app
//
//  Created by Nevin Valsaraj on 10/07/15.
//  Copyright (c) 2015 Nevin Valsaraj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
