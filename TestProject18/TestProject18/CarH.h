#pragma once
#include  <iostream>

using namespace std;

class Car {
public:
	string color;
	string model;
	int price;

	void ShowDetails();

	Car(string _color, string _model, int _price);
};
