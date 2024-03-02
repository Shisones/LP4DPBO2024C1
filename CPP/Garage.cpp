// Pre-processors and libraries
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;

// Garage Class
class Garage {
    private:
        // Attributes
        string garage_name;
        int garage_area;
        vector<Vehicle> vehicles;
        
    public:
        /* Constructors */

        // Empty Constructor
        Garage() {
            this->garage_name = "n/a";
            this->garage_area = -1;
        }
        // Constructor
        Garage(string garage_name, int garage_area){
            this->garage_name = garage_name;
            this->garage_area = garage_area;
        }
        /* Methods */

        // Get Methods
        string getGarageName() { return this->garage_name; }
        int getLotCapacity() { return this->garage_area; }

        // Set Methods
        void setGarageName(string garage_name) { this->garage_name = garage_name; }
        void setLotCapacity(int garage_area) { this->garage_area = garage_area; }

        // Garage Methods
        void showVehicleList() {
            int idx = 1;
            for (Vehicle veh : this->vehicles) {
                cout << idx << "." << endl;
                if (typeid(veh) == typeid(Car)) {
                    cout << " Tipe : Mobil" << endl;
                } else if (typeid(veh) == typeid(Car)) {
                    cout << " Tipe : Motor" << endl;
                }

                cout << " " << veh.getLicense() << endl;
                cout << " " << veh.getBrand() << endl;
                cout << " " << veh.getProdYear() << endl;
                cout << " " << veh.getColor() << endl;

                if (typeid(veh) == typeid(Car)) {
                    Car car = static_cast<Car&>(veh);
                    cout << " " << car.getCarDoors() << endl;
                    cout << " " << car.getCarSeats() << endl;
                } else if (typeid(veh) == typeid(Car)) {
                    Motorcycle bike = static_cast<Motorcycle&>(veh);
                    cout << " " << bike.getBikeType() << endl;
                    cout << " " << bike.getTankCapacity() << endl;
                }
            }
        }
        void addVehicle(Vehicle vehicle) {
            this->vehicles.push_back(vehicle);
        }
};