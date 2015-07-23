//
//  GraphNode.h
//  GraphDataStructure
//
//  Created by Shekhar  on 23/7/15.
//  Copyright (c) 2015 Edenred. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GraphEdge;

@interface GraphNode : NSObject<NSCopying> {
    id value_;
    NSMutableSet *edgesIn_;
    NSMutableSet *edgesOut_;
}

@property (nonatomic, readonly, retain) NSSet *edgesIn;
@property (nonatomic, readonly, retain) NSSet *edgesOut;
@property (nonatomic, readonly, retain) id    value;

- (id)init;
- (id)initWithValue:(id)value;
- (BOOL)isEqualToGraphNode:(GraphNode*)otherNode;

- (NSUInteger)inDegree;
- (NSUInteger)outDegree;
- (BOOL)isSource;
- (BOOL)isSink;
- (NSMutableSet*)outNodes;
- (NSMutableSet*)inNodes;
- (GraphEdge*)edgeConnectedTo:(GraphNode*)toNode;
- (GraphEdge*)edgeConnectedFrom:(GraphNode*)fromNode;

+ (id)node;
+ (id)nodeWithValue:(id)value;
@end
