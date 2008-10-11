//
//  MMRingProducer.m
//  MiuMiu
//
//  Created by Peter Zion on 10/10/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "MMFastBusyProducer.h"

#include <busy.h> // [pzion 20081011] From libiax2

@implementation MMFastBusyProducer

-(id) init
{
	return [super initWithFrequency:8000 samplesPerChunk:160 sampleLoop:busy ofLength:sizeof(busy)/sizeof(busy[0]) onSeconds:0.25 offSeconds:0.25];
}

@end