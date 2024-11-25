#pragma once
#include <string>
#include <iostream>

using namespace std;

class ParkedCar
{
public:
	
	string getMake() const { return make; }
	string getModel() const { return model; }
	string getLicenseNumber() const { return licenseNumber; }
	string getColor() const { return color; }

	int getMinutesParked() const { return minutesParked; }

	ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln="LICENSE", int mn = 0) : make(mk), model(ml), color(co), licenseNumber(ln), minutesParked(mn) {}


private:
	string make;
	string model;
	string color;
	string licenseNumber;
	int minutesParked;
};