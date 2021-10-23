// Adjascency List representation in C++

#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

// Add edge
void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}





void bfsCompute(int startNode, int numberOfNodes, vector<int> adj[]) {
  // Queue initialization
 queue<int> q;
 int prev[numberOfNodes]; 
 bool visitedNodes[numberOfNodes] = { false }; // Initialized to false.
q.push(startNode);
 visitedNodes[startNode] = true;
 while(!q.empty()) {
   int node = q.front();
   q.pop();

   vector<int> neighboors = adj[node];

   for (auto x : neighboors) {
     cout << "Element is" << " " << x << "\n";
   }

 
 }
}
// Print the graph
void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (auto x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}
 


int main() {
  int V = 9;

  // Create a graph
  vector<int> adj[V];

  // Add edges
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 7);
  addEdge(adj, 1, 2);
  addEdge(adj, 7, 8);
  addEdge(adj, 7, 6);
  addEdge(adj, 6, 8);
  addEdge(adj, 6, 5);
  addEdge(adj, 8, 2);
  addEdge(adj, 8, 6);
  addEdge(adj, 5, 3);
  addEdge(adj, 5, 4);
  addEdge(adj, 3, 4);




  printGraph(adj, V);


  bfsCompute(0, 9, adj);
  scanf("sssssssssSSSSS");
  
}

