#pragma once
#include "Car.h"

class Manager {
public:
	double getMaxPrice(Car* cars, int length) {
		double max = cars[0].price;

		for (int i = 1; i < length; i++) {
			if (max < cars[i].price) {
				max = cars[i].price;
			}
		}

		return max;
	}

	double getMinPrice(Car* cars, int length) {
		double min = cars[0].price;

		for (int i = 1; i < length; i++) {
			if (min > cars[i].price) {
				min = cars[i].price;
			}
		}

		return min;
	}

	double calcAvgPrice(Car* cars, int length) {
		double avg = 0;

		for (int i = 0; i < length; i++) {
			avg += cars[i].price;
		}

		return avg / length;
	}
};