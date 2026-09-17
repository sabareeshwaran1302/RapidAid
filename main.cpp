#include <iostream>
#include "Graph.h"
#include "Location.h"

using namespace std;

int main()
{
    cout << "==================================" << endl;
    cout << "       RAPIDAID SYSTEM" << endl;
    cout << "==================================" << endl;
    cout << endl;

    // Create locations
    Location l0(0, "MIT", "Accident Spot");
    Location l1(1, "Chromepet Hospital", "Hospital");
    Location l2(2, "Tambaram Hospital", "Hospital");
    Location l3(3, "Pallavaram", "Police Station");
    Location l4(4, "Guindy", "Ambulance Station");

    // Display locations
    cout << "RAPIDAID LOCATIONS" << endl;
    cout << "------------------" << endl;

    l0.displayLocation();
    l1.displayLocation();
    l2.displayLocation();
    l3.displayLocation();
    l4.displayLocation();

    // Create graph
    Graph city(5);

    // Add roads
    city.addRoad(0, 1, 10);
    city.addRoad(0, 2, 7);
    city.addRoad(1, 3, 5);
    city.addRoad(2, 3, 4);
    city.addRoad(3, 4, 6);

    // Display road network
    city.displayGraph();

    return 0;
}