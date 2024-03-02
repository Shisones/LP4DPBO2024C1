// Pre-processors and libraries
#pragma once
#include <string>

using namespace std;

// Vehicle Class
class Vehicle {
    private:
        // Vehicle Attributes
        string license_plate;
        string brand;
        int prod_year;
        string color;
    public:
        /* Constructors */

        // Empty Constructor
        Vehicle() {
            this->license_plate = -1;
            this->brand = "n/a";
            this->prod_year = -1;
            this->color = -1;
        }
        // Constructor
        Vehicle(string license_plate, string brand, int prod_year, string color){
            this->license_plate = license_plate;
            this->brand = brand;
            this->prod_year = prod_year;
            this->color = color;
        }

        /* Methods */
        // Get Methods
        string getLicense() { return this->license_plate; }
        string getBrand() { return this->brand; }
        int getProdYear() { return this->prod_year; }
        string getColor() { return this->color;}

        // Set Methods
        void setLicense(string license_plate) { this->license_plate = license_plate; }
        void setBrand(string brand) { this->brand = brand; }
        void setProdYear(int prod_year) { this->prod_year = prod_year; }
        void setColor(string color) { this->color = color; }
};