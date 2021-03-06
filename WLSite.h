//
//  WLSite.h
//  Welly
//
//  YLSite.h
//  MacBlueTelnet
//
//  Created by Lan Yung-Luen on 11/20/07.
//  Copyright 2007 yllan.org. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "CommonType.h"

@interface WLSite : NSObject {
    NSString *_name;
    NSString *_address;
    WLEncoding _encoding;
    YLANSIColorKey _ansiColorKey;
    BOOL _shouldDetectDoubleByte;
	BOOL _shouldAutoReply;
	BOOL _shouldEnableMouse;
	NSString *_autoReplyString;
    WLProxyType _proxyType;
    NSString *_proxyAddress;
}
@property (readwrite, copy) NSString *name;
@property (readwrite, copy) NSString *address;
@property (readwrite, assign) WLEncoding encoding;
@property (readwrite, assign) YLANSIColorKey ansiColorKey;
@property (readwrite, assign) BOOL shouldDetectDoubleByte;
@property (readwrite, assign) BOOL shouldAutoReply;
@property (readwrite, copy) NSString *autoReplyString;
@property (readwrite, assign) BOOL shouldEnableMouse;
@property (readwrite, assign) WLProxyType proxyType;
@property (readwrite, copy) NSString *proxyAddress;

+ (WLSite *)site;
+ (WLSite *)siteWithDictionary:(NSDictionary *)d;
- (NSDictionary *)dictionaryOfSite ;

- (BOOL)isDummy;
@end
