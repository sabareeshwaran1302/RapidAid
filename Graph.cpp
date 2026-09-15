#include <iostream>
#include "Graph.h"

using namespace std;

Graph::Graph(int numberOfLocations)
{
    locations = numberOfLocations;

    // Initially all roads are empty
    for (int i = 0; i < locations; i++)
    {
        for (int j = 0; j < locations; j++)
        {
            graph[i][j] = 0;
        }
    }
}

void Graph::addRoad(int from, int to, int time)
{
    graph[from][to] = time; // 'time' represents the time taken to travel from 'from' to 'to'
    graph[to][from] = time;
}

void Graph::displayGraph()
{
    cout << "City Road Network" << endl;
    cout << endl;

    for (int i = 0; i < locations; i++)
    {
        cout << "Location " << i << " is connected to: ";

        for (int j = 0; j < locations; j++)
        {
            if (graph[i][j] != 0)
            {
                cout << "Location " << j
                     << " (" << graph[i][j] << " min) ";
            }
        }

        cout << endl;
    }
}