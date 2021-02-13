#include <iostream>
using namespace std;
double sum(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
double mul(double a, double b)
{
	return a * b;
}
double div(double a, double b)
{
	return a/b;
}
int main()
{
	cout << "\t \t \t \t Calculator V1.0 \t \t \t \t" << endl;
	double DNum1 = 0.0,DNum2=0.0;
	int IOper = 0;
	cout << "Please enter your numbers:" << endl;
	cin >> DNum1 >> DNum2;
	cout << "Please choise your operation from this menu:" << endl;
	cout << " 1-Sum \n 2-Sub \n 3-Mul \n 4-Div" << endl;
	cin >> IOper;
	switch (IOper) {
	case 1:
		cout << "The sum of numbers =" << sum(DNum1, DNum2) << endl;
		break;
	case 2:
	cout << "The sub of numbers =" << sub(DNum1, DNum2) << endl;
		break;
	case 3:
	cout << "The Mul of numbers =" << mul(DNum1, DNum2) << endl;
		break;
	case 4:
	{
		if (DNum2 = 0.0)
			cout << "You can not division on ZERO :)! " << endl;
		else
			cout << "The Div of numbers =" << div(DNum1, DNum2) << endl;
		break; }
	}return 0;
}