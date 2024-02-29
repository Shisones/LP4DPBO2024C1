from Vehicle import Vehicle # Imports Vehicle Class
from Car import Car # Imports Car Class
from Motorcycle import Motorcycle # Imports Motorcycle Class

class Garage:
    # Attribute Declaration
    __garage_name = ""
    __garage_area = -1
    __vehicle_list = []

    # Constructor
    def __init__(self, garage_name="", garage_area=-1):
        self.__garage_name = garage_name
        self.__garage_area = garage_area = garage_area

    # Getter-Setter
    # Get Methods
    def getBikeType(self):
        return self.__garage_name
    def getTankCapacity(self):
        return self.__garage_area
    # Set Methods
    def setBikeType(self, garage_name):
        self.__garage_name = garage_name
    def setTankCapacity(self, garage_area):
        self.__garage_area = garage_area

    # Methods
    def showVehicleList(self):
        idx = 1
        for veh in self.__vehicle_list:
            print(f"{idx}.")
            if (isinstance(veh, Car)):
                print(" Tipe : Mobil")
            elif (isinstance(veh, Motorcycle)):
                print(" Tipe : Motor")
            
            print(f" {veh.getLicense()}")
            print(f" {veh.getBrand()}")
            print(f" {veh.getProdYear()}")
            print(f" {veh.getColor()}")

            if (isinstance(veh, Car)):
                print(f" {veh.getCarDoors()}")
                print(f" {veh.getCarSeats()}")
            elif (isinstance(veh, Motorcycle)):
                print(f" {veh.getBikeType()}")
                print(f" {veh.getTankCapacity()}")
                
            idx += 1
    def addVehicle(self, vehicle):
        self.__vehicle_list.append(vehicle)