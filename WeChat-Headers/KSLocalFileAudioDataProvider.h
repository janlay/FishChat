//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSAudioDataProvider.h"

@class NSString;

@interface KSLocalFileAudioDataProvider : KSAudioDataProvider
{
    NSString *_audioFileExt;
}

@property(retain, nonatomic) NSString *audioFileExt; // @synthesize audioFileExt=_audioFileExt;
- (void).cxx_destruct;
- (id)audioFileExtension;
- (void)close:(_Bool)arg1;
- (_Bool)isReady;
- (_Bool)prepareAudioData;
- (void)dealloc;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;

@end
