#include <iostream>

using namespace std;

int main() {

	//Veribles
	string TeacherName, StudentName, University;
	int Grade1, Grade2, Grade3, Grade4 , StudentNo;
	float Avarage;
	char StudentGrade;
	bool Failed;
	

	//
	//In Processies

	cout << "**********************************************************************"<<endl;
	cout << "Welcome to University Grade System!"<<endl<<"Please Enter Your University Name:";
	cin >> University;
	cout << "Your University is " << University << endl << "Plese Enter Your Name:";
	cin >> TeacherName;
	cout << "Welcome " << TeacherName << endl << "Please Enter the Student's Name:";
	cin >> StudentName;
	cout << "Plese Enter The Student' Number:";
	cin >> StudentNo;
	cout << "Plese Enter First Exam Resoult:";
	cin >> Grade1;
	cout << "Plese Enter Secound Exam Resoult:";
	cin >> Grade2;
	cout << "Plese Enter Third Exam Resoult:";
	cin >> Grade3;
	cout << "Plese Enter Fourth Exam Resoult:";
	cin >> Grade4;
	cout << "**********************************************************************"<<endl;

	// 
	//Info Processies
	Avarage = (Grade1 + Grade2 + Grade3 + Grade4) / 4 / 25;
	if (Avarage>=3)
	{
		StudentGrade = 'A';
		Failed = false;
	}
	if ( 2<= Avarage < 3)
	{
		StudentGrade = 'B';
		Failed = false;
	}
	if (1.50 <= Avarage < 2)
	{
		StudentGrade = 'C';
		Failed = false;
	}
	if (Avarage < 1.50)
	{
		StudentGrade = 'F';
		Failed = true;
	}

	// 
	//Out Processies
	
	cout << "--------------------------------------------------------------------------"<<endl;
	cout << "Student Name : " << StudentName << endl << "Student Number : " << StudentNo << endl;
	cout << "University : " << University << endl;
	if (Failed = false)
	{
		cout << endl << "Student Pass The Class!" << endl;
	}
	else 
	{
		cout << endl << "Student Faild The Class!" << endl;
	}
	cout << "Student First Exam Resoult : " << Grade1 << endl;
	cout << "Student Secound Exam Resoult : " << Grade2 << endl;
	cout << "Student Third Exam Resoult : " << Grade3 << endl;
	cout << "Student Fourth Exam Resoult : " << Grade4 << endl;
	
	cout << "Student Exam Resoults Avarage : " << Avarage << endl;
	cout << "Student Grade : " << StudentGrade << endl;

	cout << "--------------------------------------------------------------------------"<<endl;
	
	//

	return 0;
}


//string StudentName = "Mehmet";
//char StudentNote = 'B';
//int StudentPoint = 67;
//bool EntryExam = true;
//float StudentAvarage = 2.75;
//double Pi = 3.141564532237988956545;