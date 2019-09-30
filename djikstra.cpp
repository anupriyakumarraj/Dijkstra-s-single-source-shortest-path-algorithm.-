// A C++ program for Dijkstra's single source shortest path algorithm. 
#include <stdio.h> 
#include <limits.h> 
#define V 6
int minDistance(int dist[], bool sptSet[]) 
{ 
int min = INT_MAX, min_index; 
for (int v = 0; v < V; v++) 
	if (sptSet[v] == false && dist[v] <= min) 
		min = dist[v], min_index = v; 
return min_index; 
} 
int printSolution(int dist[], int n, int p) 
{ 
printf("Vertex Set\n Distance Vector \n Precedence Vector \n"); 
for (int i = 0; i < V; i++) 
	printf("%d \n %d \n %d \n", i, dist[i], prev[u]); 
} 
void dijkstra(int graph[V][V], int src) 
{ 
	int dist[V];
	bool sptSet[V]; 
	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX, sptSet[i] = false; 
	dist[src] = 0; 
	for (int count = 0; count < V-1; count++) 
	{  
	int u = minDistance(dist, sptSet); 
	sptSet[u] = true; 
	for (int v = 0; v < V; v++) 
		if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v]) 
			dist[v] = dist[u] + graph[u][v];
			prev[v]=u;
	} 
	printSolution(dist, V, u); 
} 
int main() 
{ 
int graph[V][V] = {{0, 1, 2, 0, 0, 0},
		{0, 0, 5, 7, 0, 0},
		{0, 0, 0, 1, 2, 0},
		{0, 0, 0, 0, 0, 2},
		{0, 0, 3, 0, 0, 5},
		{0, 0, 0, 9, 0, 0},
};
	dijkstra(graph, 0); 
	return 0; 
}
