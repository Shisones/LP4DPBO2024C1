// Pre-processors and libraries
#pragma once
#include <string>
#include "Vehicle.cpp"

using namespace std;
        
// Motorcycle class
class Motorcycle : public Vehicle {
    private:
        // Attributes
        string bike_type;
        int tank_capacity;

    public:
        /* Constructors */

        // Empty Constructor
        Motorcycle() {
            this->bike_type = "n/a";
            this->tank_capacity = -1;
        }
        // Non-Empty Constructor
        Motorcycle(int bike_type, int tank_capacity, string license_plate, string brand, int prod_year, string color) : Vehicle(license_plate, brand, prod_year, color){
            this->bike_type = bike_type;
            this->tank_capacity = tank_capacity;
        }

        /* Methods */

        // Get Methods
        string getBikeType() { return this->bike_type; }
        int getTankCapacity() { return this->tank_capacity; }

        // Set Methods
        void setBikeType(string bike_type) { this->bike_type = bike_type; }
        void setTankCapacity(int tank_capacity) { this->tank_capacity = tank_capacity; }
};