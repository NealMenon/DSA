#include <stdio.h>
#define max 9999;
int adj[max][max];
int cities[max][3];
int mincost=max;
int visited[max];

int minDistance(int dist[], int visited[])
{
   // Initialize min value
   int min = INT_MAX, min_index;

   for (int v = 0; v < V; v++)
     if (visited[v] == 0 && dist[v] <= min)
         min = dist[v], min_index = v;

   return min_index;
}

void dijkstra(int V, int graph[V][V], int src)
{
     int dist[V];
     int visited[V];

     for (int i = 0; i < V; i++)
        dist[i] = max, visited[i] = 0;

     dist[src] = 0;
     for (int count = 0; count < V-1; count++)
     {
       int u = minDistance(dist, visited);
       visited[u] = 1;

       for (int v = 0; v < V; v++)
         if (!visited[v] && graph[u][v] && dist[u] != max && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }

}




int main()
{
  int N, M;
  scanf("%d %d", &N, &M);

  int flights[M][3];

  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++)
      adj[i][j]=9999;

  for(int i=0; i<M; i++)
  {
    scanf("%d %d %d", &flights[i][0], &flights[i][1], &flights[i][2]);
    adj[flights[i][0]][flight[i][1]]=adj[flights[i][1]][flight[i][0]]=flights[i][2];
  }

  int t;
  scanf("%d", &t);


  for(int 0; i<t; i++)
    scanf("%d %d %d", &cities[i][0], &cities[i][1], &cities[i][2]);

  for(int i=0; i<t; i++)
  {
      dijkstras(N, adj, cities[i][0]);

  }
  return 0;
}
