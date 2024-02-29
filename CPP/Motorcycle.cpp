#include <string>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle {
    private:
        string bike_type;
        int tank_capacity;

    public:
        Motorcycle() {
            this->bike_type = "n/a";
            this->tank_capacity = -1;
        }
        Motorcycle(int bike_type, int tank_capacity){
            this->bike_type = bike_type;
            this->tank_capacity = tank_capacity;
        }

        string getBikeType() { return this->bike_type; }
        int getTankCapacity() { return this->tank_capacity; }

        void setBikeType(string bike_type) { this->bike_type = bike_type; }
        void setTankCapacity(int tank_capacity) { this->tank_capacity = tank_capacity; }
};