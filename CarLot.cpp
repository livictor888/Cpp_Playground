#include "Vehicle.h"
#include "iostream"
using namespace std;

class CarLot{
private:

public:


};

int main() {
    Vehicle toyota = Vehicle("234ads", "Toyota", JET_BLACK, 15'000, 250'000);
    Vehicle honda =  Vehicle("123abc", "Honda", CHERRY_RED,
                     20'000, 10'000);
    cout << toyota.getOdometer();
    return 0;
}