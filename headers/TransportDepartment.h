#ifndef TRANSPORTDEPARTMENT_H
#define TRANSPORTDEPARTMENT_H

#include <vector>
#include <string>
#include "Vehicle.h"
#include "VehicleType.h"
class Vehicle;
class VehicleTaxi;

class TransportDepartment {
private:
    std::vector<Vehicle*> vehicles;

public:
    void addVehicle(const Vehicle& vehicle);
    void manage();
    ~TransportDepartment(); 
    Vehicle& getAvailableVehicle(VehicleType type);
    void repairVehicle(Vehicle& vehicle);
    int getSize() {
        return vehicles.size();
    }
    int getBroken();
};

#endif
