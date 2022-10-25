#include "graph.hpp"

AdjListNode* newAdjListNode(int dest, int weight) 
{
	AdjListNode* newNode = (AdjListNode*) malloc (sizeof (AdjListNode));
	newNode -> dest = dest;
	newNode -> weight = weight;
	newNode -> next = NULL;
	return newNode;
}

Graph* createGraph(int V) 
{
	Graph* graph = (Graph*) malloc (sizeof (Graph));
	graph -> V = V;
	graph -> adjList = (AdjList*) malloc (V * sizeof (AdjList));

	int i;
	for (i = 0; i < V; i++) {
		graph -> adjList[i].head = NULL;
	}
	return graph;
}

void addEdgeU(Graph* graph, int src, int dest, int weight = 1) 
{
	// Adds edge from src to dest
	AdjListNode* check = NULL;
	AdjListNode* newNode = newAdjListNode(dest, weight);

	if (graph -> adjList[src].head == NULL) {
		newNode -> next = graph -> adjList[src].head;
		graph -> adjList[src].head = newNode;
	} else {
		check = graph -> adjList[src].head;
		while (check -> next != NULL) {
			check = check -> next;
		}
		check -> next = newNode;
	}

	// Adds edge from dest to src
	newNode = newAdjListNode(src, weight);

	if (graph -> adjList[dest].head == NULL) {
		newNode -> next = graph -> adjList[dest].head;
		graph -> adjList[dest].head = newNode;
	} else {
		check = graph -> adjList[dest].head;
		while (check -> next != NULL) {
			check = check -> next;
		}
		check -> next = newNode;
	}
}

void addEdgeD(Graph* graph, int src, int dest, int weight = 1)
{
	AdjListNode* check = NULL;
	AdjListNode* newNode = newAdjListNode(dest, weight);

	if (graph -> adjList[src].head == NULL) {
		newNode -> next = graph -> adjList[src].head;
		graph -> adjList[src].head = newNode;
	} else {
		check = graph -> adjlist[src].head;
		while (check -> next != NULL) {
			check = check -> next;
		}
		check -> next = newNode;
	}
}
