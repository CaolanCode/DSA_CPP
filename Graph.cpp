/*
    Graph
 */
#include <iostream>
#include <unordered_set>
#include <unordered_map>
using std::cout;
using std::endl;
using std::string;
using std::unordered_set;
using std::unordered_map;

class Graph
{
    unordered_map<string, unordered_set<string> > adjList;
public:
    bool addVertex(string vertex);
    bool addEdge(string vertex1, string vertex2);
    bool removeEdge(string vertex1, string vertex2);
    bool removeVertex(string vertex);
    void printGraph();
};

bool Graph::addVertex(string vertex)
{
    if(adjList.count(vertex) == 0) {
        adjList[vertex];
        return true;
    }
    return false;
}

bool Graph::addEdge(string vertex1, string vertex2)
{
    if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
        adjList.at(vertex1).insert(vertex2);
        adjList.at(vertex2).insert(vertex1);
        return true;
    }
    return false;
}

bool Graph::removeEdge(string vertex1, string vertex2)
{
    if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
        adjList.at(vertex1).erase(vertex2);
        adjList.at(vertex2).erase(vertex1);
        return true;
    }
    return false;
}

bool Graph::removeVertex(string vertex)
{
    if(adjList.count(vertex) == 0) return false;
    for(auto otherVertex : adjList.at(vertex))
    {
        adjList.at(otherVertex).erase(vertex);
    }
    adjList.erase(vertex);
    return true;
}

void Graph::printGraph()
{
    for(auto [vertex, edges] : adjList)
    {
        cout << vertex << ": [ ";
        for(auto edge : edges)
        {
            cout << edge << " ";
        }
        cout << "]" << endl;
    }
}

int main()
{
    Graph *myGraph = new Graph();
    myGraph->addVertex("A");
    myGraph->addVertex("B");
    myGraph->addVertex("C");
    myGraph->addEdge("A", "B");
    myGraph->addEdge("A", "C");
    
    myGraph->printGraph();
    
    return 0;
}
