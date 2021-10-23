// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;
class Vertex {
private:
string vertexName; // Name of the vertex

public:
vector<string> adjacent;
Vertex() {
}

Vertex(string name, vector<string> adjacentList) {
vertexName = name;
adjacent = adjacentList;
}

Vertex(string name){
vertexName = name;
}
string getName() { 
    return vertexName;
}
 vector<string> getAdjecent() { return adjacent; }
};
int main() { 
    vector<string> adjacent;
    adjacent.push_back("Second vertex");
    Vertex firstVertex("First vertex.", adjacent);
    Vertex secondVertex("Second vertex.");
    string tmp;
    vector<string> adj = firstVertex.adjacent;
    for(string t: adj) {
       tmp = tmp += t + ",";
    }
    cout << "The name of the vertex is the " << firstVertex.getName() << " and the adjacent vertices are [" << tmp << " ]";
    scanf("Waiting for the input.");
}



