#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter Farenheit Temperature: " << endl;
	double degreesFarenheit;

	cin >> degreesFarenheit;

	double degreesCelsius = (degreesFarenheit - 32) * 5 / 9;

	cout << degreesCelsius;

	Sleep(10000);
	return 0;
}