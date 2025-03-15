#pragma once
#include <string>
#include <iostream>

using namespace std;

class ParkedCar
{
public:

	void setCar(string mk, string md, string c, string l, int min)
	{
		make = mk;
		model = md;
		color = c;
		licenseNumber = l;
		minutes = min;
	}

	int getMinutes() { return minutes; }

	void print()
	{
		cout << "Vehicle License Number: " << licenseNumber << endl;
		cout << "Make: " << make << " Model: " << model << " Color: " << color << endl;
	}

	ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln="LICENSE", int mn = 0) : make(mk), model(ml), color(co), licenseNumber(ln), minutes(mn) {}


private:
	string make;
	string model;
	string color;
	string licenseNumber;
	int minutes;
};