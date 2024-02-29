class ParkingLot:
    # Attribute Declaration
    __lot_capacity = -1;
    __occupied = -1;


    # Constructor
    def __init__(self, lot_capacity=-1, occupied=-1):
        self.__lot_capacity = lot_capacity
        self.__occupied = occupied = occupied

    # Getter-Setter
    # Get Methods
    def getLotCapacity(self):
        return self.__lot_capacity
    def getOccupied(self):
        return self.__occupied

    # Set Methods
    def setLotCapacity(self, lot_capacity):
        self.__lot_capacity = lot_capacity
    def setOccupied(self, occupied):
        self.__occupied = occupied