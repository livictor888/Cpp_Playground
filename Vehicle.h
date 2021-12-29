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
    Vehicle(string vin, string name, int year, Colour colour, int price, int odometer);

    const string &getVin() const;

    const string &getName() const;

    int getYear() const;

    Colour getColour() const;

    double getPrice() const;

    bool isElectric1() const;

    int getNumberOfDoors() const;

    int getNumberOfWheelDrive() const;

    int getOdometer() const;

    void setPrice(double price);

    void setOdometer(int newOdometer);

    bool operator==(const Vehicle &rhs) const;

    bool operator!=(const Vehicle &rhs) const;

    friend ostream &operator<<(ostream &os, const Vehicle &vehicle);

};

Vehicle::Vehicle(string vin, string name, int year, Colour colour, int price, int odometer) {
    this->vin = vin;
    this->name = name;
    this->colour = colour;
    this->price = price;
    this->odometer = odometer;
}

const string &Vehicle::getVin() const {
    return vin;
}

const string &Vehicle::getName() const {
    return name;
}

int Vehicle::getYear() const {
    return year;
}

Colour Vehicle::getColour() const {
    return colour;
}

double Vehicle::getPrice() const {
    return price;
}

bool Vehicle::isElectric1() const {
    return isElectric;
}

int Vehicle::getNumberOfDoors() const {
    return numberOfDoors;
}

int Vehicle::getNumberOfWheelDrive() const {
    return numberOfWheelDrive;
}

int Vehicle::getOdometer() const {
    return this->odometer;
}

void Vehicle::setPrice(double newPrice) {
    Vehicle::price = newPrice;
}

void Vehicle::setOdometer(int newOdometer) {
    Vehicle::odometer = newOdometer;
}

bool Vehicle::operator==(const Vehicle &rhs) const {
    return vin == rhs.vin &&
           name == rhs.name &&
           year == rhs.year &&
           colour == rhs.colour &&
           price == rhs.price &&
           isElectric == rhs.isElectric &&
           numberOfDoors == rhs.numberOfDoors &&
           numberOfWheelDrive == rhs.numberOfWheelDrive &&
           odometer == rhs.odometer;
}

bool Vehicle::operator!=(const Vehicle &rhs) const {
    return !(rhs == *this);
}

ostream &operator<<(ostream &os, const Vehicle &vehicle) {
    os << "vin: " << vehicle.vin << " name: " << vehicle.name << " year: " << " colour: "
       << vehicle.colour << " price: " << vehicle.price << " odometer: "
       << vehicle.odometer << "\n";
    return os;
}
