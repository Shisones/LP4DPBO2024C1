#include <string>
#include <vector>
#include "Vehicle.cpp"

using namespace std;

class Garage {
    private:
        string garage_name;
        int garage_area;
        vector<Vehicle> vehicles;
        
    public:
        Garage() {
            this->garage_name = "n/a";
            this->garage_area = -1;
        }
        Garage(string garage_name, int garage_area){
            this->garage_name = garage_name;
            this->garage_area = garage_area;
        }

        string getGarageName() { return this->garage_name; }
        int getLotCapacity() { return this->garage_area; }

        void setGarageName(string garage_name) { this->garage_name = garage_name; }
        void setLotCapacity(int garage_area) { this->garage_area = garage_area; }
};