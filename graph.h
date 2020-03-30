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
