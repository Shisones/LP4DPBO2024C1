# Import all classes in our project
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

# Initialize a looping boolean to stop the loop
loopValid = True
garage = Garage("Garage1", 500)

while(loopValid):
    print("\nOpsi :")
    print("[C] - Add Car")
    print("[M] - Add Motorcycle")
    print("[S] - Show ")

    # Get User Inpu:t
    option = input("> ")[0]

    # Break the loop if input is invalid
    if option != 'C' and option != 'M' and option != 'S':
        break;
    
    if option == 'C': # Car Condition
        temp_car = Car()

        print("Vehicle Info :")
        print(" Tolong Isi Informasi berkaitan dengan Kendaraan")
        temp_car.setLicense(input(" Plat Nomor = "))
        temp_car.setBrand(input(" Merk = "))
        temp_car.setProdYear(input(" Tahun Produksi = "))
        temp_car.setColor(input(" Warna = "))

        print("Car-Specific Info :")
        print(" Tolong Isi Informasi berkaitan dengan Kendaraan")
        temp_car.setCarDoors(input(" Jumlah Pintu = "))
        temp_car.setCarSeats(input(" Jumlah Kursi = "))

        garage.addVehicle(temp_car)

    elif option == 'M': # Motorcycle Condition
        temp_motor = Motorcycle()

        print("Vehicle Info :")
        print(" Tolong Isi Informasi berkaitan dengan Kendaraan")
        temp_motor.setLicense(input(" Plat Nomor = "))
        temp_motor.setBrand(input(" Merk = "))
        temp_motor.setProdYear(input(" Tahun Produksi = "))
        temp_motor.setColor(input(" Warna = "))

        print("Motorcycle-Specific Info :")
        print(" Tolong Isi Informasi berkaitan dengan Kendaraan")
        temp_motor.setBikeType(input(" Tipe Motor = "))
        temp_motor.setTankCapacity(input(" Ukuran Tangki = "))

        garage.addVehicle(temp_motor)

    elif option == 'S': # Show Condition
        garage.showVehicleList()