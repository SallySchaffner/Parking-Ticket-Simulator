#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
using namespace std;

class PoliceOfficer {
private:
	string name;
	string badgeNumber;

public:
	string getName() const { return name; }
	string getBadgeNumber() const { return badgeNumber; }

	//set values for the officer
	PoliceOfficer(string n = "Name", string bn = "BNumber") : name(n), badgeNumber(bn) {}

	void issueTicket(const ParkedCar& car, const ParkingMeter& meter);
};