#ifndef AMBULANCE_H
#define AMBULANCE_H

#include <string>
using namespace std;

class Ambulance
{
private:
    int id;
    string driverName;
    int location;
    bool available;

public:
    Ambulance(int id, string driverName, int location);

    void displayAmbulance();

    int getLocation();

    bool isAvailable();

    void setAvailable(bool status);
};

#endif