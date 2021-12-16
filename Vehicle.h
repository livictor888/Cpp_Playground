#include <string>
#include <iostream>

using namespace std;
enum Colour {CHERRY_RED,SNOWY_WHITE,JET_BLACK};

class Vehicle {

private:
    string vin;
    string name;
    int year;
    Colour colour;
    double price;
    bool isElectric;
    int numberOfDoors;
    int numberOfWheelDrive;
    int odometer;

public:
    Vehicle(string vin, string name, Colour colour, int price, int odometer);
    int getOdometer();
};

Vehicle::Vehicle(string vin, string name, Colour colour, int price, int odometer) {
    this->vin = vin;
    this->name = name;
    this->colour = colour;
    this->price = price;
    this->odometer = odometer;
}

int Vehicle::getOdometer() {
    return this->odometer;
}
