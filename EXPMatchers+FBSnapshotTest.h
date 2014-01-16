//
//  EXPMatchers+FBSnapshotTest.h
//  Artsy
//
//  Created by Daniel Doubrovkine on 1/14/14.
//  Copyright (c) 2014 Artsy Inc. All rights reserved.
//

#import "Expecta.h"

@interface EXPExpectFBSnapshotTest : NSObject
@end

/// Set the default folder for image tests to run in
extern void setReferenceImageDir(char *reference);

EXPMatcherInterface(haveValidSnapshot, (void));
EXPMatcherInterface(recordSnapshot, (void));

EXPMatcherInterface(haveValidSnapshotNamed, (NSString *snapshot));
EXPMatcherInterface(recordSnapshotNamed, (NSString *snapshot));
