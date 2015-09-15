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
    // stub (delete when you implement this function)
	int numVert;
	fscanf(graph,"%d",&numVert);
	int numEdge;
	fscanf(graph,"%d",&numEdge);
	vertex_t *vertices;
	for(int i = 0; i < 1; i++){
		int id;
		char* name = ;
	//	char* color;
		fscanf(graph,"%d",&id);
		fscanf(graph,"%s",&name);
		printf("%s",name);
		//fscanf(graph,"%s",&color);
		
		//fputs(name,stdout);
//vertex_t newVert = new_vertex(
	}
	fclose(graph); 
    return NULL;
}

// writes the result of our computations
// to stdout
void graph_to_stdout(graph_t graph) {
    // get a list of bad edges in the graph
    get_bad_edges(graph);
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






