//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BCNetworkService : NSObject
{
    id <BCNetworkServiceDelegate> _delegate;
}


- (id)addresses;
@property(retain, nonatomic) id <BCNetworkServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)name;
- (void)startService;
- (void)stopService;

@end

