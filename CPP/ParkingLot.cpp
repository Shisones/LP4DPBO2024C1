#include <string>

using namespace std;

class ParkingLot {
    private:
        int lot_capacity;
        int occupied;
        
    public:
        ParkingLot() {
            this->lot_capacity = -1;
            this->occupied = -1;
        }
        ParkingLot(int lot_capacity, int occupied){
            this->lot_capacity = lot_capacity;
            this->occupied = occupied;
        }

        int getLotCapacity() { return this->lot_capacity; }
        int getOccupied() { return this->occupied; }

        void setLotCapacity(int lot_capacity) { this->lot_capacity = lot_capacity; }
        void setOccupied(int occupied) { this->occupied = occupied; }
};