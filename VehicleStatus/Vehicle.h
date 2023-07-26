#pragma once
#include <iostream>

using namespace std;

class Vehicle{

public:
	//Constuructor
	Vehicle(float _weightOfVehicle, int _capacity, float _fuelCapacity, float _fuelAmount);
	//
	
	//Getting
	float getFuelAmount();
	float getFuelCapacity();
	float getWeightOfVehicle();
	int getCapacity();
	//
	//Setting
	void setFuelAmount(float _fuelAmount);
	void setFuelCapacity(float _fuelCapacity);
	void setWeightOfVehicle(float _weightOfVehicle);
	void setCapacity(int _capacity);
	//
	void writeAllInformations();

private:
	float fuelAmount;
	float fuelCapacity;
	float weightOfVehicle;
	int capacity;
};
