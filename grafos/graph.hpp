#ifndef _GRAPH_HPP_
#define _GRAPH_HPP_

#include <bits/stdc++.h>

using namespace std;

// structure to represent a node in an adjacency list
typedef struct AdjListNode {
	int dest;
	int weight;
	AdjListNode* next;
}AdjListNode;

// structure to represent an adjacency list
typedef struct AdjList {
	AdjListNode* head;
}AdjList;

// structure to represent a graph, consists of an array of adj. lists
// and the number of vertices in the graph
typedef struct Graph {
	int V;
	AdjList* adjList;
}Graph;

// Adds a new node to <dest>'s adjacency list
AdjListNode* newAdjListNode(int dest, int weight);

// Creates a graph with <V> vertices
Graph* createGraph(int V); 

// Add undirected edge to graph
void addEdgeU(Graph* graph, int src, int dest, int weight); 

// Add directed edge to graph
void addEdgeD(Graph* graph, int src, int dest, int weight);

#endif
