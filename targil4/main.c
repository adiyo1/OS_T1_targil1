#include <stdio.h>
#include "dijkstra.h"

int main() {
    int graph[V][V];

    // Reading the graph from stdin
    printf("Enter the graph (adjacency matrix):\n");
    for (int i = 0; i < V; i++) {
        printf("Enter distances for vertex %d: ", i);
        for (int j = 0; j < V; j++) {
            printf("Distance from vertex %d to vertex %d: ", i, j); // Print the current position in the graph
            scanf("%d", &graph[i][j]);
            // Check for negative arc weights
            if (graph[i][j] < 0) {
                printf("Error: Negative arc weight detected.\n");
                return 1; // Exit with error code
            }
        }
    }

    // Running Dijkstra's algorithm
    printf("Shortest distances from source vertex 0:\n");
    dijkstra(graph, 0);

    return 0;
}
