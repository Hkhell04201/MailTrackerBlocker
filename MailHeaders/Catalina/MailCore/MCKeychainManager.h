//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCKeychainManager : NSObject
{
}

+ (struct __SecPolicy *)createSMIMEPolicyForAddress:(id)arg1 keyUsage:(void *)arg2;	// IMP=0x000000000001bde0
+ (struct __SecPolicy *)createSMIMEPolicyForAddress:(id)arg1 keyUsage:(void *)arg2 ignoreExpiration:(BOOL)arg3;	// IMP=0x0000000000054a5c
+ (struct __SecCertificate *)copyEncryptionCertificateForAddress:(id)arg1;	// IMP=0x000000000005443c
+ (struct __SecIdentity *)copySigningIdentityForAddress:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000053e49
+ (id)copyTLSClientIdentities;	// IMP=0x0000000000053c1d
+ (void)setSessionTrustedCertificates:(id)arg1 forHost:(id)arg2;	// IMP=0x0000000000053b37
+ (id)sessionTrustedCertificatesForHost:(id)arg1;	// IMP=0x0000000000016163

@end

