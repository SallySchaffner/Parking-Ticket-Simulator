#pragma once
#include <string>
#include <iostream>

using namespace std;

class ParkedCar
{
public:
	void setMake(string m) { make = m; }
	void setModel(string m) { model = m; }
	void setLicense(string l) { licenseNumber = l; }
	void setColor(string c) { color = c;  }
	void setMinutes(int m) { minutes = m; }

	string getMake() { return make; }
	string getModel() { return model; }
	string getLicense() { return licenseNumber; }
	string getColor() { return color; }
	int getMinutes() { return minutes;  }
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