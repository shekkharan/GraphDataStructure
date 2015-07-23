//
//  ViewController.m
//  GraphDataStructure
//
//  Created by Shekhar  on 23/7/15.
//  Copyright (c) 2015 Edenred. All rights reserved.
//

#import "ViewController.h"
#import "Graph.h"

@interface ViewController ()
{
    Graph* graph;
    GraphNode *ns, *nt, *n1, *n2, *n3;
    GraphEdge *nsn1, *nsn2, *nsn3, *n1nt, *n2nt, *n3nt;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setUpGraph];
    NSArray* path = [graph shortestPath:ns to:nt];
    for (GraphNode *node in path) {
        NSLog(@"Node %@",node.value);
    }
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)setUpGraph
{
    // create the graph
    graph = [Graph graph];
    
    // add some nodes
    ns = [GraphNode nodeWithValue:@"ns"];
    nt = [GraphNode nodeWithValue:@"nt"];
    n1 = [GraphNode nodeWithValue:@"n1"];
    n2 = [GraphNode nodeWithValue:@"n2"];
    n3 = [GraphNode nodeWithValue:@"n3"];
    
    // add some edges
    nsn1 = [graph addEdgeFromNode:ns toNode:n1 withWeight:7.0f];
    nsn2 = [graph addEdgeFromNode:ns toNode:n2 withWeight:9.0f];
    nsn3 = [graph addEdgeFromNode:ns toNode:n3 withWeight:14.0f];
    n1nt = [graph addEdgeFromNode:n1 toNode:nt withWeight:10.0f];
    n2nt = [graph addEdgeFromNode:n2 toNode:nt withWeight:9.0f];
    n3nt = [graph addEdgeFromNode:n3 toNode:nt withWeight:1.0f];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
