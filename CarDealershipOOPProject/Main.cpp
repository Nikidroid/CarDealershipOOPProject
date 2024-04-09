#include "Car.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	Car car1("Toyota", "Supra","coupe", 2019, 90000);
	Car car2("BMW", "M5 F90","sedan", 2017, 100000);
	Car car3("Daewoo", "Matiz","micro car", 2015, 10000);
	Car car4("Dodge", "RAM TRX","pickup", 2023, 115000);
	Car car5("Lamborghini", "Aventador SVG","hyper car", 2019, 550000);
	
	Car cars[]{car1, car2, car3, car4, car5};

	Manager manager;

	for (int i = 0; i < 5; i++) {
		cout << cars[i].convert() << endl;
	}

	cout << "Most expensive car cost " << manager.getMaxPrice(cars, 5) << " dollars." << endl;
	cout << "Cheapest car cost " << manager.getMinPrice(cars, 5) << " dollars." << endl;

	return 0;
}