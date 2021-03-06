//
//  LXCategory.h
//  LXCategoriesDemo
//
//  Created by liuxin on 2018/12/29.
//  Copyright © 2018年 liuxin. All rights reserved.
//

#ifndef LXCategory_h
#define LXCategory_h

#if __has_include(<LXCategory/LXCategory.h>)

#import <LXCategory/NSArray+LXAdd.h>
#import <LXCategory/NSMutableArray+LXAdd.h>
#import <LXCategory/NSAttributedString+LXAdd.h>
#import <LXCategory/NSData+LXAdd.h>
#import <LXCategory/NSDate+LXAdd.h>
#import <LXCategory/NSFileManager+LXAdd.h>
#import <LXCategory/NSString+Hash.h>
#import <LXCategory/NSString+Verify.h>
#import <LXCategory/NSString+LXSize.h>
#import <LXCategory/NSString+LXCommon.h>

#import <LXCategory/UINavigationBar+LXAdd.h>
#import <LXCategory/UIButton+LXAdd.h>
#import <LXCategory/UIColor+LXAdd.h>
#import <LXCategory/UIImage+LXAdd.h>
#import <LXCategory/UIView+LXAdd.h>
#import <LXCategory/UIImageView+LXAdd.h>
#import <LXCategory/UILabel+LXAdd.h>


#else

#import "LXCategoryMacro.h"
#import "NSArray+LXAdd.h"
#import "NSMutableArray+LXAdd.h"
#import "NSAttributedString+LXAdd.h"
#import "NSData+LXAdd.h"
#import "NSDate+LXAdd.h"
#import "NSFileManager+LXAdd.h"
#import "NSString+Hash.h"
#import "NSString+Verify.h"
#import "NSString+LXSize.h"
#import "NSString+LXCommon.h"

#import "UINavigationBar+LXAdd.h"
#import "UIButton+LXAdd.h"
#import "UIColor+LXAdd.h"
#import "UIImage+LXAdd.h"
#import "UIView+LXAdd.h"
#import "UIImageView+LXAdd.h"
#import "UILabel+LXAdd.h"

#endif



#endif /* LXCategory_h */
