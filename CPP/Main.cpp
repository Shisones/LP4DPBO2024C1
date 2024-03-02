#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

using namespace std;


int main() {
    bool loopValid = true;
    Garage garage("Garage1", 500);

    while (loopValid) {
        cout << "\nOpsi :\n";
        cout << "[C] - Add Car\n";
        cout << "[M] - Add Motorcycle\n";
        cout << "[S] - Show\n";

        // Get User Input
        char option;
        cout << " > ";
        cin >> option;

        // Break the loop if input is invalid
        if (option != 'C' && option != 'M' && option != 'S') {
            break;
        }

        if (option == 'C') { // Car Condition
            Car temp_car;

            cout << "Vehicle Info :\n";
            cout << " Tolong Isi Informasi berkaitan dengan Kendaraan\n";

            string license, brand, color;
            int prodYear;

            cout << " Plat Nomor = "; cin >> license;
            cout << " Merk = "; cin >> brand;
            cout << " Tahun Produksi = "; cin >> prodYear;
            cout << " Warna = "; cin >> color;

            temp_car.setLicense(license);
            temp_car.setBrand(brand);
            temp_car.setProdYear(prodYear);
            temp_car.setColor(color);

            cout << "Car-Specific Info :\n";
            cout << " Tolong Isi Informasi berkaitan dengan Kendaraan\n";

            int carDoors, carSeats;
            cout << " Jumlah Pintu = "; cin >> carDoors;
            cout << " Jumlah Kursi = "; cin >> carSeats;

            temp_car.setCarDoors(carDoors);
            temp_car.setCarSeats(carSeats);

            garage.addVehicle(temp_car);
        } else if (option == 'M') { // Motorcycle Condition
            Motorcycle temp_motor;

            cout << "Vehicle Info :\n";
            cout << " Tolong Isi Informasi berkaitan dengan Kendaraan\n";

            string license, brand, color;
            int prodYear;

            cout << " Plat Nomor = "; cin >> license;
            cout << " Merk = "; cin >> brand;
            cout << " Tahun Produksi = "; cin >> prodYear;
            cout << " Warna = "; cin >> color;

            temp_motor.setLicense(license);
            temp_motor.setBrand(brand);
            temp_motor.setProdYear(prodYear);
            temp_motor.setColor(color);

            cout << "Motorcycle-Specific Info :\n";
            cout << " Tolong Isi Informasi berkaitan dengan Kendaraan\n";

            string bikeType;
            int tankCapacity;

            cout << " Tipe Motor = "; cin >> bikeType;
            cout << " Ukuran Tangki = "; cin >> tankCapacity;

            temp_motor.setBikeType(bikeType);
            temp_motor.setTankCapacity(tankCapacity);

            garage.addVehicle(temp_motor);
        } else if (option == 'S') { // Show Condition
            garage.showVehicleList();
        }
    }

    return 0;
}