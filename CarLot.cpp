#include "Vehicle.h"
#include "iostream"
#include "vector"
using namespace std;

class CarLot {
private:
    vector<Vehicle> cars;
public:
    CarLot();
    void createAndAddCar(string vin, string name, int year, Colour colour, int price, int odometer);
    void addCar(Vehicle car);
    void removeCar(Vehicle car);
    void generateStreamAndPerformServices();
    void sortByPrice();
    string toString();
};

CarLot::CarLot() {

}

void CarLot::createAndAddCar(string vin, string name, int year, Colour colour, int price, int odometer) {

}

void CarLot::addCar(Vehicle car) {
    cars.push_back(car);
}

void CarLot::removeCar(Vehicle car) {
    vector<Vehicle>::iterator iterator;
    iterator = cars.begin();
    while(iterator != cars.end()) {
        if (*iterator == car) {
            cars.erase(iterator);
        }
        iterator++;
    }

}

void CarLot::generateStreamAndPerformServices() {

}

void CarLot::sortByPrice() {

}

string toString() {
}

int main() {
    Vehicle toyota = Vehicle("234ads", "Toyota", 1995, JET_BLACK, 15'000, 250'000);
    Vehicle honda =  Vehicle("123abc", "Honda", 2002, CHERRY_RED,
                     20'000, 10'000);
    CarLot myCarLot;
    myCarLot.addCar(toyota);
    myCarLot.addCar(honda);
    //myCarLot.removeCar(toyota);

    // cout << toyota.getOdometer();
    cout << toyota;
    cout << honda;
    // cout << myCarLot;
    return 0;
}