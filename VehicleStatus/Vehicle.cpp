#include "Vehicle.h"

//Constuructor
Vehicle::Vehicle(float _weightOfVehicle, int _capacity, float _fuelCapacity, float _fuelAmount=0)
{
	Vehicle::fuelAmount = _fuelAmount;
	Vehicle::fuelCapacity = _fuelCapacity;
	Vehicle::weightOfVehicle = _weightOfVehicle;
	Vehicle::capacity = _capacity;
}
// Getting
float Vehicle::getFuelAmount()
{
	return Vehicle::fuelAmount;
}

float Vehicle::getFuelCapacity()
{
	return Vehicle::fuelCapacity;
}
float Vehicle::getWeightOfVehicle()
{
	return Vehicle::weightOfVehicle;
}
int Vehicle::getCapacity() 
{
	return Vehicle::capacity;
}

//

//Setting
void Vehicle::setFuelAmount(float _fuelAmount)
{
	Vehicle::fuelAmount = _fuelAmount;
}
void Vehicle::setFuelCapacity(float _fuelCapacity)
{
	Vehicle::fuelAmount = _fuelCapacity;
}
void Vehicle::setWeightOfVehicle(float _weightOfVehicle)
{
	Vehicle::fuelAmount = _weightOfVehicle;
}
void Vehicle::setCapacity(int _capacity)
{
	Vehicle::fuelAmount = _capacity;
}

//

void Vehicle::writeAllInformations()
{
	cout << Vehicle::fuelAmount<<"L"<<endl;
	cout << Vehicle::fuelCapacity<<"L"<<endl;
	cout << Vehicle::weightOfVehicle<<"kg"<<endl;
	cout << Vehicle::capacity <<" Person"<< endl;
}

