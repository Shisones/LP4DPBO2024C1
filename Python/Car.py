from Vehicle import Vehicle # Imports Vehicle Class

class Car(Vehicle):
    # Attribute Declaration
    __car_doors = -1;
    __car_seat = -1;


    # Constructor
    def __init__(self, car_doors=-1, car_seat=-1,  license_plate="n/a", brand="n/a", prod_year=-1, color="n/a"):
        super().__init__(license_plate, brand, prod_year, color)
        self.__car_doors = car_doors
        self.__car_seat = car_seat = car_seat

    # Getter-Setter
    # Get Methods
    def getCarDoors(self):
        return self.__car_doors
    def getCarSeats(self):
        return self.__car_seat

    # Set Methods
    def setCarDoors(self, car_doors):
        self.__car_doors = car_doors
    def setCarSeats(self, car_seat):
        self.__car_seat = car_seat