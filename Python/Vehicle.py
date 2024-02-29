class Vehicle:
    # Attribute Declaration
    __license_plate = "";
    __brand = "";
    __prod_year = -1;
    __color = "";

    # Constructor
    def __init__(self, license_plate="n/a", brand="n/a", prod_year=-1, color="n/a"):
        self.__license_plate = license_plate
        self.__brand = brand = brand
        self.__prod_year = prod_year
        self.__color = color

    # Getter-Setter
    # Get Methods
    def getLicense(self):
        return self.__license_plate
    def getBrand(self):
        return self.__brand
    def getProdYear(self):
        return self.__prod_year
    def getColor(self):
        return self.__color
        
    # Set Methods
    def setLicense(self, license_plate):
        self.__license_plate = license_plate
    def setBrand(self, brand):
        self.__brand = brand
    def setProdYear(self, prod_year):
        self.__prod_year = prod_year
    def setColor(self, color):
        self.__color = color
    