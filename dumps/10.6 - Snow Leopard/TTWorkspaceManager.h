/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, TTWorkspace;

@interface TTWorkspaceManager : NSObject
{
    NSMutableArray *_workspaces;
    TTWorkspace *_startupWorkspace;
    BOOL _isLoadingFromDefaults;
}

+ (id)sharedWorkspaceManager;
- (id)init;
- (void)dealloc;
- (void)synchronize;
- (id)workspaces;
- (void)setWorkspaces:(id)arg1;
- (unsigned long long)countOfWorkspaces;
- (void)insertObject:(id)arg1 inWorkspacesAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromWorkspacesAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInWorkspacesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)workspaceWithName:(id)arg1;
- (void)setWorkspace:(id)arg1 forName:(id)arg2;
- (id)uniqueWorkspaceNameWithBase:(id)arg1;
- (id)startupWorkspace;
- (void)setStartupWorkspace:(id)arg1;
- (id)workspaceSavePanel;

@end

