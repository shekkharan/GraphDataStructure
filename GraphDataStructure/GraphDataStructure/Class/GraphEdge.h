//
//  GraphEdge.h
//  GraphDataStructure
//
//  Created by Shekhar  on 23/7/15.
//  Copyright (c) 2015 Edenred. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GraphNode;

@interface GraphEdge : NSObject {
    GraphNode   *fromNode_;
    GraphNode   *toNode_;
    float       weight_;
}

@property (nonatomic, readonly, retain)  GraphNode *fromNode;
@property (nonatomic, readonly, retain)  GraphNode *toNode;
@property (nonatomic, readwrite, assign) float     weight;

- (id)init;
- (id)initWithFromNode:(GraphNode*)fromNode toNode:(GraphNode*)toNode;
- (id)initWithFromNode:(GraphNode*)fromNode toNode:(GraphNode*)toNode weight:(float)weight;
- (BOOL)isEqualToGraphEdge:(GraphEdge*)other;

+ (id)edge;
+ (id)edgeWithFromNode:(GraphNode*)fromNode toNode:(GraphNode*)toNode;
+ (id)edgeWithFromNode:(GraphNode*)fromNode toNode:(GraphNode*)toNode weight:(float)weight;

@end
