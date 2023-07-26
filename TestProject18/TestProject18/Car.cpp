#include "CarH.h"

//Car Constructer
Car::Car(string _color, string _model, int _price) {
	color = _color;
	model = _model;
	price = _price;
}

void Car::ShowDetails(){
	
	cout << "Model : " << Car::model<<endl;
	cout << "Color : " << Car::color<<endl;
	cout << "Price : " << Car::price<<endl;

}