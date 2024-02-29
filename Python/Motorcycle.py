from Vehicle import Vehicle # Imports Vehicle Class

class Motorcycle(Vehicle):
    # Attribute Declaration
    __bike_type = "";
    __tank_capacity = -1;


    # Constructor
    def __init__(self, bike_type=-1, tank_capacity=-1, license_plate="n/a", brand="n/a", prod_year=-1, color="n/a"):
        super().__init__(license_plate, brand, prod_year, color)
        self.__bike_type = bike_type
        self.__tank_capacity = tank_capacity = tank_capacity

    # Getter-Setter
    # Get Methods
    def getBikeType(self):
        return self.__bike_type
    def getTankCapacity(self):
        return self.__tank_capacity

    # Set Methods
    def setBikeType(self, bike_type):
        self.__bike_type = bike_type
    def setTankCapacity(self, tank_capacity):
        self.__tank_capacity = tank_capacity