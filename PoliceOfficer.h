#pragma once
#include <string>
#include <iostream>
#include "ParkingTicket.h"

using namespace std;

class ParkedCar;
class ParkingMeter;

class PoliceOfficer
{
public:
	void setName(string n) { name = n; }
	void setBadgeNumber(string b) { badgeNumber = b; }
	string getName() { return name; }
	string getBadgeNumber() { return badgeNumber; }

	void setCarInfo(ParkedCar c, ParkingMeter m)
	{
		car = c;
		meter = m;
	}
	

	void print()
	{
		cout << "Officer " << name << " Badge Number " << badgeNumber << endl;
	}

	PoliceOfficer(string nm = "NAME", string bd = "BNUMBER", 
		          string mk = "MAKE", string md = "MODEL", string c = "Color", 
		          string l = "AXXXXX", int cMin = 0, int mMin = 0) : name(nm), badgeNumber(bd), car(mk, md, c, l, cMin), meter(mMin) {};

	void writeTicket() 
	{
		cout << endl;
		int minutesOver = car.getMinutes() - meter.getMinutes();
		if (minutesOver > 0)
		{
			print();
			cout << endl;
			ParkingTicket* ticket = new ParkingTicket(car, minutesOver);
			ticket->print();
			cout << endl;
			delete ticket;
		}
		else
		{
			cout << "No parking violation" << endl;
		}
	}
	

private:
	string name;
	string badgeNumber;
	ParkedCar car;
	ParkingMeter meter;
};

