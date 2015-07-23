//
//  Graph.h
//  GraphDataStructure
//
//  Created by Shekhar  on 23/7/15.
//  Copyright (c) 2015 Edenred. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GraphEdge.h"
#import "GraphNode.h"

@interface Graph : NSObject {
    NSMutableSet *nodes_;
}

@property (nonatomic, readonly, retain) NSSet *nodes;

- (NSArray*)shortestPath:(GraphNode*)source to:(GraphNode*)target;
- (GraphNode*)addNode:(GraphNode*)node;
- (GraphEdge*)addEdgeFromNode:(GraphNode*)fromNode toNode:(GraphNode*)toNode;
- (GraphEdge*)addEdgeFromNode:(GraphNode*)fromNode toNode:(GraphNode*)toNode withWeight:(float)weight;
- (void)removeNode:(GraphNode*)node;
- (void)removeEdge:(GraphEdge*)edge;
- (BOOL)hasNode:(GraphNode*)node;
+ (Graph*)graph;

@end
