#include <iostream>
#include "Location.h"

using namespace std;

Location::Location(int id, string name, string type)
{
    this->id = id;
    this->name = name;
    this->type = type;
}

void Location::displayLocation()
{
    cout << "Location ID   : " << id << endl;
    cout << "Location Name : " << name << endl;
    cout << "Location Type : " << type << endl;
    cout << endl;
}