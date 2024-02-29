#include <string>

using namespace std;

class Vehicle {
    private:
        string license_plate;
        string brand;
        int prod_year;
        string color;
    public:
        Vehicle() {
            this->license_plate = -1;
            this->brand = "n/a";
            this->prod_year = -1;
            this->color = -1;
        }
        Vehicle(string license_plate, string brand, int prod_year, string color){
            this->license_plate = license_plate;
            this->brand = brand;
            this->prod_year = prod_year;
            this->color = color;
        }

        string getPlate() { return this->license_plate; }
        string getBrand() { return this->brand; }
        int getYear() { return this->prod_year; }
        string getColor() { return this->color;}

        void setPlate(string license_plate) { this->license_plate = license_plate; }
        void setBrand(string brand) { this->brand = brand; }
        void setYear(int prod_year) { this->prod_year = prod_year; }
        void setColor(string color) { this->color = color; }
};