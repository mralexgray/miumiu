//
//  MMPhoneLevel.h
//  MiuMiu
//
//  Created by Peter Zion on 31/10/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMRect.h"
#import "MMView.h"

@protocol MMPhoneSliderDelegate;

@interface MMPhoneLevel : NSObject
{
@private
	MMView *levelIndicator;
}

@property ( nonatomic, readonly ) MMView *view;
@property ( nonatomic, assign ) MMRect frame;
@property ( nonatomic, assign ) float value;

@end
