#include "graph.h"

int main(int argc, const char * argv[]) {
    unordered_set<Node*> us;
    unordered_set<Node*>::iterator it;
    Node *n;
    srand((unsigned int) time(0));
    Graph g;
    g.createRandomUnweightedGraphIter(10);
    cout << "Graph:";
    g.printNodes();
    g.printU();
    g.clear();
    g.createLinkedList(10);
    cout << "LinkedList:";
    g.printNodes();
    g.printU();
    us = g.getAllNodes();
    cout << "Unordered_set: ";
    for (it = us.begin(); it != us.end(); it++){
        n = *it;
        cout << n->info << " ";
    }
    cout << endl;
    return 0;
}
//8. Break these up.
//9. Try to separate cout(which is a test) to one section and the drivers to another.
//10. This is the cleanest code I've read. C++ squad HOOAH
