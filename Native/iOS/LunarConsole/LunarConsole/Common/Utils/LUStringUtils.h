//
//  LUStringUtils.h
//
//  Lunar Unity Mobile Console
//  https://github.com/SpaceMadness/lunar-unity-console
//
//  Copyright 2015-2020 Alex Lementuev, SpaceMadness.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//


#import <Foundation/Foundation.h>

BOOL LUStringTryParseInteger(NSString *str, NSInteger *outResult);
BOOL LUStringTryParseFloat(NSString *str, float *outResult);
BOOL LUStringContainsRichTextTags(NSString *str);
NSString *LUStringRemoveRichTextTags(NSString *str);
NSString *LUStringRichTextToHtml(NSString *str);
NSString *LUSerializeDictionaryToString(NSDictionary *data);
