/*
#include <stdio.h>

int main() {

	int nodes, edges;
	int inp[25][2];
    int node[25];
    for(int i = 0; i < 25; i++) node[i] = -1;


	printf("Enter number of nodes: ");
	scanf("%d", &nodes);
	printf("Enter number of edges: ");
	scanf("%d", &edges);

	printf("Enter all the edges connections: \n");
	for(int i = 0; i < edges; i++) {
		scanf("%d %d", &inp[i][0], &inp[i][1]);
	}
    
    for(int i = 0; i < nodes; i++){
        node[i] = 0;
    }
    
    for(int i = 0; i < edges; i++) {
        
    }


	return 0;

}
*/


#include <stdio.h> 

int V = 4;
// This function returns true if graph 
// G[V][V] is Bipartite, else false 
bool isBipartite(int G[][V], int src) { 

	int colorArr[V]; 
	for (int i = 0; i < V; ++i) 
		colorArr[i] = -1; 

	colorArr[src] = 1; 
 
	queue <int> q; 
	q.push(src); 

	while (!q.empty()) { 
		int u = q.front(); 
		q.pop(); 

		if (G[u][u] == 1) 
		return false; 

		for (int v = 0; v < V; ++v) { 
			
			if (G[u][v] && colorArr[v] == -1) { 
				colorArr[v] = 1 - colorArr[u]; 
				q.push(v); 
			} 

			
			else if (G[u][v] && colorArr[v] == colorArr[u]) 
				return false; 
		} 
	} 

	return true; 
} 

// Driver program to test above function 
int main() 
{ 
	int G[][V] = {{0, 1, 0, 1}, 
		{1, 0, 1, 0}, 
		{0, 1, 0, 1}, 
		{1, 0, 1, 0} 
	}; 

	isBipartite(G, 0) ? cout << "Yes" : cout << "No"; 
	return 0; 
} 
