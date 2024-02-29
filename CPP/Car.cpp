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
        Car(int car_doors, int seat){
            this->car_doors = car_doors;
            this->seat = seat;
        }

        int getCarDoors() { return this->car_doors; }
        int getYear() { return this->seat; }

        void setCarDoors(int car_doors) { this->car_doors = car_doors; }
        void setYear(int seat) { this->seat = seat; }
};