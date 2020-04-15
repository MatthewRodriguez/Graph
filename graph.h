#ifndef graph_h
#define graph_h
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unordered_set>
using namespace std;
struct Node{
    int info;
    vector<Node*> list;
    Node(int i) : info(i){}
};

class Graph{
    vector<Node*> nodes;
    public:
    Graph();
    void addNode(int val);
    void addUndirectedEdge(Node *first, Node *second);
    void undirectedEdge(Node *first, Node *second);
    void removeUndiretedEdge(Node *first, Node *second);
    void createRandomUnweightedGraphIter(int n);
    void createLinkedList(int n);
    void printNodes();
    void printU();
    void addU();
    void removeU();
    unordered_set<Node*> getAllNodes();
};

#endif /* graph_h */

//5. Good use of precompiler. Makes for portable code. The header file according to the professor meets industry standards, great job!
//6. Might want to add a comment on what unordered_set is, since its different from the data type the professor specified, and professor Rengesh doesn't use cpp.
//7. Why did we include ctime? 
