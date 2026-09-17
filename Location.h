#ifndef LOCATION_H
#define LOCATION_H

#include <string>
using namespace std;

class Location
{
private:
    int id;
    string name;
    string type;

public:
    Location(int id, string name, string type);

    void displayLocation();
};

#endif