#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
private:
    int graph[10][10];
    int locations; //stores how many locations we have.

public:
    Graph(int numberOfLocations);

    void addRoad(int from, int to, int time);

    void displayGraph();
};

#endif