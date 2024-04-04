#include "Car.h"
#include <iostream>

using namespace std;

int main() {
	Car car1("Toyota", "Supra","coupe", 2019, 90000);
	Car car2("BMW", "M5 F90","sedan", 2017, 100000);
	Car car3("Daewoo", "Matiz","micro car", 2015, 10000);
	Car car4("Dodge", "RAM TRX","pickup", 2023, 115000);
	Car car5("Lamborghini", "Aventador SVG","hyper car", 2019, 550000);
	Car car6;

	cout << car1.convert() << endl;
	cout << car2.convert() << endl;
	cout << car3.convert() << endl;
	cout << car4.convert() << endl;
	cout << car5.convert() << endl;
	cout << car6.convert() << endl;

	return 0;
}