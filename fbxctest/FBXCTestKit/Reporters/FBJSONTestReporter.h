/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <FBControlCore/FBFileConsumer.h>
#import "FBXCTestReporter.h"

@interface FBJSONTestReporter : NSObject <FBXCTestReporter>

- (instancetype)initWithTestBundlePath:(NSString *)testBundlePath testType:(NSString *)testType fileConsumer:(id <FBFileConsumer>)fileConsumer;

@end
