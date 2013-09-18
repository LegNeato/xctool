//
// Copyright 2013 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

typedef enum {
  kSuccess = 0,
  kDLOpenError = 1,
  kBundleOpenError,
  kUnsupportedFramework,
  kClassLoadingError,
} OTestExitCode;

// Why FOUNDATION_EXPORT? Read here:
// http://stackoverflow.com/questions/538996/constants-in-objective-c
// Internally, it just becomes 'extern'.
FOUNDATION_EXPORT NSString *const kTestingFrameworkClassName;
FOUNDATION_EXPORT NSString *const kTestingFrameworkAllTestsSelectorName;

NSDictionary *FrameworkInfoForExtension(NSString *extension);
NSDictionary *FrameworkInfoForTestBundleAtPath (NSString *path);
