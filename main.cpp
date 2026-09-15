#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
    cout << "==================================" << endl;
    cout << "       RAPIDAID SYSTEM" << endl;
    cout << "==================================" << endl;
    cout << endl;

    // Create a graph with 5 locations
    Graph city(5);

    // Add roads
    city.addRoad(0, 1, 10);
    city.addRoad(0, 2, 7);
    city.addRoad(1, 3, 5);
    city.addRoad(2, 3, 4);
    city.addRoad(3, 4, 6);

    // Display the graph
    city.displayGraph();

    return 0;
}