#pragma once

#include <string>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle {
    private:
        int car_doors;
        int seat;

    public:
        Car() {
            this->car_doors = -1;
            this->seat = -1;
        }
        Car(int car_doors, int seat, string license_plate, string brand, int prod_year, string color) : Vehicle(license_plate, brand, prod_year, color){
            this->car_doors = car_doors;
            this->seat = seat;
        }

        int getCarDoors() { return this->car_doors; }
        int getCarSeats() { return this->seat; }

        void setCarDoors(int car_doors) { this->car_doors = car_doors; }
        void setCarSeats(int seat) { this->seat = seat; }
};