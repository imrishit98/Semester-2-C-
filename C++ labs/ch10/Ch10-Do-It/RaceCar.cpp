/*
Author: Rishit Patel
Date: May 15, 2019
Description: Chapter 10 You Do It RaceCar.cpp
*/
#include<iostream>
using namespace std;

class Car {
protected:
	bool isIgnitionOn;
	int speed;
public:
	void turnIgnitionOn();
	void turnIgnitionOff();
	void setSpeed(int);
	void showCar();
};

void Car::showCar() {
	if (isIgnitionOn)
		cout << "Ignition is on. ";
	else
		cout << "Ignition is off. ";
	cout << "Speed is " << speed << endl;
}

void Car::turnIgnitionOn() {
	isIgnitionOn = true;
}
void Car::turnIgnitionOff() {
	speed = 0;
	isIgnitionOn = false;
}

void Car::setSpeed(int mph) {
	const int STD_LIMIT = 65;
	if (isIgnitionOn) {
		if (mph <= STD_LIMIT)
			speed = mph;
		else
			speed = STD_LIMIT;
	}
	else {
		cout << "Can't set speed - ignition is off!" << endl;
	}
}

class RaceCar : public Car {
public:
	void setSpeed(int mph);
};

void RaceCar::setSpeed(int mph) {
	const int MAX_SPEED = 200;
	if (isIgnitionOn)
		if (mph <= MAX_SPEED)
			speed = mph;
		else
			speed = MAX_SPEED;
	else
		cout << "Can't set speed - ignition is off!" << endl;
}

int main()
{
	Car aCar;
	RaceCar aRaceCar;
	aCar.turnIgnitionOn();
	aCar.setSpeed(80);
	cout << "Car at 80 mph: ";
	aCar.showCar();
	aRaceCar.turnIgnitionOn();
	aRaceCar.setSpeed(80);
	cout << "Race car at 80 mph: ";
	aRaceCar.showCar();
	return 0;
}