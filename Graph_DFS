//Graph ADT - DFS Traversal  Implementation
#include <iostream>
using namespace std;
#define MAX 20
class Graph {
private:
    struct Node {
        int vertex;
        struct Node* next;
    }* G[MAX], *p, *temp;       // Adjacency list representation of the graph
    bool visited[MAX];  // Visited array for DFS
    int vertices;

public:
    Graph(int v);  // Constructor: Initializes the graph and visited array
    struct Node* createNode(int v);
    void addEdges(int edges[][2], int e); // Method to add edges from predefined input
    void insert(int vs, int vd); // Method to insert a node in adjacency list
    void DFS(int source);        // Depth First Search traversal
};

// Method to create and initialize a new node
Graph::Node* Graph::createNode(int v) {
    temp = new Node;
    temp->vertex = v;
    temp->next = NULL;
    return temp;
}

// Constructor: Initializes the graph and visited array
Graph::Graph(int v) {
    p = NULL;
    temp = NULL;
    vertices = v;
    for (int i = 0; i < v; i++) {
        G[i] = NULL;
        visited[i] = false;
    }
}

// Algorithm to add edges to the graph
void Graph::addEdges(int edges[][2], int e) {
    for (int i = 0; i < e; i++) {
        int vs = edges[i][0];
        int vd = edges[i][1];
        insert(vs, vd); // Add edge from vs to vd in the adjacency list
    }
}

// Algorithm for adjacency list for directed edges
void Graph::insert(int vs, int vd) {
    temp = createNode(vd);
    if (G[vs] == NULL) {
        G[vs] = temp; // First node in the list
        return;
    }
        p = G[vs];
        while (p->next != NULL) // Traverse to the end of the list
            p = p->next;
        p->next = temp;
}

// Recursive DFS Algorithm
void Graph::DFS(int source) {
    cout << source << " --> ";
    visited[source] = true;
    Node* p = G[source];
    while (p != NULL) {
        int vertex = p->vertex;
        if (!visited[vertex])
            DFS(vertex); // Recursively visit adjacent vertice
        p = p->next;
    }
}

/*int main() {
    int vertices = 9;
    int noofedges = 11;
    Graph G(vertices);
    // Define edges as pairs of vertices
    int edges[][2] = {
        {2,1},
        {2,3},
        {2,5},
        {2,6},
        {1,5},
        {3,4},
        {3,6},
        {5,9},
        {6,7},
        {6,9},
        {7,8},
    };
    // Add edges to the graph
    G.addEdges(edges,noofedges);
    int s;
    cout<<"Enter the source vertex:";
    cin>>s;
    cout<<"\nThe DFS sequence from the source is:";
    G.DFS(s);
}*/

int main(){
    int vertices,noofedges;
    int v1,v2;
    int edges[20][2];
    cout<<"\nEnter no. of vertices and edges:";
    cin>>vertices>>noofedges;
    Graph G(vertices);
    cout<<"\nEnter the " <<noofedges<< "edges:";
    for(int i=0;i<noofedges;i++)    {
       cin>>v1>>v2;
       edges[i][0]=v1;
       edges[i][1]=v2;
    }
       // Add edges to the graph
    G.addEdges(edges,noofedges);
    int s;
    cout<<"Enter the source vertex:";
    cin>>s;
    cout<<"\nThe DFS sequence from the source is:";
    G.DFS(s);
}
