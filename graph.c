/* graph.c
 * implements functions declared in graph.h
 *
 * Your task (which you have no choice but to accept):
 * Fill in the definitions of the functions contained below 
 * (every place where you see "TODO: Your code here")
 *
 * NOTE: For purposes of writing modular code,
 * this file does NOT contain high-level
 * functions for reading a graph from stdin
 * or writing a graph to stdout.
 * These functions are contained in main.c.
 *
 * Lenny Brown 
 * CSC 173 Fall 2015 -- Graph Coloring project
 * TODO: WRITE THE DATE YOU SUBMITTED THE ASSIGNMENT HERE
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "graph.h"

// C functions that are declared in graph.h
// Creates a new vertex from an ID, name, and color
vertex_t new_vertex(int id, char *name, char *color) {
    // stub (delete when you implement this function)
    vertex_t this = malloc(sizeof(vertex_t));
	this -> id = id; 
	this -> name = name;
	this -> color = color;
	return this;
}

// Creates a new edge from an ID, name, and source/destination vertices
edge_t new_edge(int id, char *name, vertex_t src, vertex_t dst) {
    // stub (delete when you implement this function)
    edge_t this = malloc(sizeof(edge_t));
	this -> id = id;
	this -> name = name;
	this -> src = src;
	this -> dst = dst;
	return this;
}

// Creates a new graph from a list of vertices and edges
graph_t new_graph(vertex_t *vertices, edge_t *edges) {
    // stub (delete when you implement this function)
	graph_t this = malloc(sizeof(graph_t));
	this -> vertices = vertices;
	this -> edges = edges;
    return this;
}

// Prints a vertex to stdout
void print_vertex(vertex_t vertex) {
	printf("%s:{%d,%s}\n",vertex -> name, vertex -> id, vertex -> color);
}

// Prints an edge to stdout
void print_edge(edge_t edge) {
	printf("%s:%d",edge -> name, edge -> id);	
}

// Prints a graph to stdout
void print_graph(graph_t graph) {
    for(int i = 0; i<sizeof(graph -> vertices); i++){
		print_vertex((graph->vertices)[i]);
	}
    for(int i = 0; i<sizeof(graph -> edges); i++){
		print_edge((graph->edges)[i]);
	}
}

// Prints all bad edges to stdout
void print_bad_edges(edge_t *edges) {
    /* TODO: Your code here */
}

// returns the number of distinct colors found within the graph's vertices
int num_colors(graph_t graph) {
    // stub (delete when you implement this function)
    return 0;
    /* TODO: Your code here */
}

// returns true if the graph has a valid coloring, false otherwise
// NOTE: A graph is colored correctly *if and only if*
// each edge contains vertices of a different color
bool has_valid_coloring(graph_t graph) {
    // stub (delete when you implement this function)
    return true;
    /* TODO: Your code here */
}

// returns an array of the bad edges in the graph
// i.e. the edges where its two vertices have the same color
edge_t *get_bad_edges(graph_t graph) {
    // stub (delete when you implement this function)
    return NULL;
    /* TODO: Your code here */
}

// TODO: Definitions of other functions you have 
// defined in graph.h go here



