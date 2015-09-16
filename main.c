/* main.c
 * contains the main method, which basically
 * calls your other functions
 *
 * Your mission (which you have no choice but to accept):
 * Modify the functions below (marked with TODO) so that
 * your program correctly reads graphs from stdin and
 * writes the correct output to stdout.
 *
 * TODO: WRITE YOUR NAME HERE
 * CSC 173 Fall 2015 -- Graph Coloring project
 * TODO: WRITE THE DATE YOU SUBMITTED THE ASSIGNMENT HERE
 */

// Instructions on running the executable
// The makefile will produce an executable file called
// 'coloring', which you can run to see if your code is
// correct.
// 'coloring' takes its input from stdin (by default,
// your terminal) and prints its output to stdout
// (also your terminal by default). To run it this way,
// type './coloring' at your command line (without the quotes),
// then type in an input graph. Press enter, and your program's
// result should appear right below.
// However, this requires you to type in an input graph every
// time you want to run your program. There is a quicker way...
// To run your program against the first test case, for example,
// redirect the input graph to stdin, and connect stdout to a file.
// To do this, type './coloring < tests/in/test_1.txt > tests/out/test_1.txt'
// (without the quotes).

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "main.h"
#include "graph.h"

int main() {
    // read in the graph from stdin
    
    graph_t graph = stdin_to_graph();
    // do the necessary computations, and
    // write the result to stdout
    graph_to_stdout(graph);
}

// reads in the graph from stdin and 
// stores it in a graph_t struct
graph_t stdin_to_graph() {
	FILE *graph;
	
	graph = fopen("./tests/in/test_1.txt","r");	
	
	int numVert;
	fscanf(graph,"%d",&numVert);
	int numEdge;
	fscanf(graph,"%d",&numEdge);

	vertex_t vertices[numVert];
	edge_t edges[numEdge];	

	for(int i = 0; i < numVert; i++){
		int id;
		char* name = malloc(sizeof(char)*20);	
		char* color = malloc(sizeof(char)*10);
		fscanf(graph,"%d",&id);
		fscanf(graph,"%s",name);
		fscanf(graph,"%s",color);
				
		vertices[id] = new_vertex(id,name,color);
		free(name);
		free(color);
	}
	
	
	for(int i=0; i<numEdge; i++){
		int id;
		fscanf(graph,"%d",&id);

		char* name = malloc(sizeof(char)*31);
		char* throw = malloc(sizeof(char)*7);
		fscanf(graph,"%s %s",throw,name);

		int IdSrc;
		int IdDst;
		fscanf(graph,"%d",&IdSrc);
		fscanf(graph,"%d",&IdDst);
		
		vertex_t src = vertices[IdSrc];
		vertex_t dst = vertices[IdDst];

		edges[i] = new_edge(id,name,src,dst);
		
	} 
	fclose(graph); 
	
	//I'm choosing to build the whole graph even though technically I could probably sort it and return in this one function I might end up changing this
	graph_t this = new_graph(vertices, numVert, edges, numEdge);
    	return this;
}

// writes the result of our computations
// to stdout
void graph_to_stdout(graph_t graph) {
    // get a list of bad edges in the graph
    edge_t* badEdges = get_bad_edges(graph);
//	print_bad_edges(badEdges);
    // get the number of colors in the graph
    int colors = num_colors(graph);
    // falsely assume that the graph is colored correctly, and print out a YES message
    printf("YES\n%d\n", colors);
    /* TODO: Modify the code above so that it correctly
     * computes whether the graph is colored correctly,
     * and if not, correctly prints the list of bad edges
     * in order of increasing edge IDs
     */
}






