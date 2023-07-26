#include <iostream>
#include <cmath>

using namespace std;
int main() {
	/*
	cout << floor(2.1) << endl << ceil(2.1) << endl << round(2.7) << endl << pow(2,10) << endl;
	//Floor --> Tabana Yuvarlar
	//Ceil  --> Tavana Yuvarlar
	//Round --> Yuvarlar
	//Pow   --> Kuvvet Almak icin kullanilir(taban,kuvvet)

	*/
	
	int selection;
	float number1, number2,resault;
	bool key = true;
	cout << "*********************************************"<<endl;
	cout << "Welcome to Calculator!" << endl << "Plese enter your first number:";
	cin >> number1;
	cout << "Plese enter your secound number:";
	cin >> number2;




	if(number1==0 && number2==0)
	{
		cout << "Your Numbers are ZERO!!" << endl;
	}
	else if (number1 == 0 || number2 == 0)
	{
		cout << "Your one number is ZERO!!" << endl;
	}
	else if (number1 > 0 && number2 > 0) {
		cout << "Your Numbers are POSITIVE!!" << endl;
	}
	else if (number1 < 0 && number2 < 0) {
		cout << "Your Numbers are NEGATIVE!!" << endl;
	}
	else if (number1 < 0 || number2 < 0) {
		cout << "Your one number is NEGATIVE!!" << endl;
	}




	cout << "Plese select your operation:" << endl << "1.Summation" << endl << "2.Extraction" << endl << "3.Multiply" << endl << "4.Divide" << endl;
	cin >> selection;
	if (selection == 1) 
	{
		resault = number1 + number2;
	}
	else if (selection == 2) 
	{
		resault = number1 - number2;
	}
	else if (selection == 3)
	{
		resault = number1 * number2;
	}
	else if (selection == 4)
	{
		resault = number1 / number2;
	}
	else
	{
		key = false;
	}
	if(key==true)
	{
		cout << "Your Resault : " << resault << endl;
	}
	else 
	{
		cout << "Please Enter a True Operation!"<<endl;
	}

	cout << "*********************************************" << endl;

}