//
//  FEPhoto.h
//  FEPhotoBrowserDemo
//
//  Created by isaced on 15/9/8.
//  Copyright (c) 2015年 feelinging. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FEPhoto : NSObject

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIImage *placeholderImage;

@property (nonatomic, strong) NSURL *imageURL;

@end
