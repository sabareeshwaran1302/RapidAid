#include <iostream>
#include "Ambulance.h"

using namespace std;

Ambulance::Ambulance(int id, string driverName, int location)
{
    this->id = id;
    this->driverName = driverName;
    this->location = location;
    this->available = true;
}

void Ambulance::displayAmbulance()
{
    cout << "Ambulance ID   : " << id << endl;
    cout << "Driver Name    : " << driverName << endl;
    cout << "Location      : " << location << endl;

    if (available)
        cout << "Status         : Available" << endl;
    else
        cout << "Status         : Busy" << endl;

    cout << endl;
}

int Ambulance::getLocation()
{
    return location;
}

bool Ambulance::isAvailable()
{
    return available;
}

void Ambulance::setAvailable(bool status)
{
    available = status;
}