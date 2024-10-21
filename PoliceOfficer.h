#pragma once
#include <string>
#include <iostream>

using namespace std;

class PoliceOfficer
{
public:
	void setName(string n) { name = n; }
	void setBadgeNumber(string b) { badgeNumber = b; }
	string getName() { return name; }
	string getBadgeNumber() { return badgeNumber; }
	void print()
	{
		cout << "Officer " << name << " Badge Number " << badgeNumber << endl;
	}
	bool issueTicket(int minutesParked, int minutesOnMeter)
	{
		if (minutesOnMeter - minutesParked < 0)
			return true;
		else
			return false;
	}

	PoliceOfficer(string nm = "NAME", string bd = "BNUMBER"): name(nm), badgeNumber(bd) {}


private:
	string name;
	string badgeNumber;
};

