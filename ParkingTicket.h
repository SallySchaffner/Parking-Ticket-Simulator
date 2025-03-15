#pragma once
#include "PoliceOfficer.h"

class ParkedCar;
class ParkingMeter;

const int FirstHour = 25;
const int OtherHour = 10;

class ParkingTicket
{
public:
	double calcParkingFee()
	{
		int parkingFee = 0;

		// Get the time parked in hours.
		double hours = minutes / 60.0;

		// Get the hours as an int.
		int hoursAsInt = static_cast<int>(hours);

		// If there was a portion of an hour, round up.
		if ((hours - hoursAsInt) > 0)
			hoursAsInt++;

		// Assign the base fine.
		parkingFee = FirstHour;

		// Add the additional hourly fines.
		parkingFee += ((--hoursAsInt) * OtherHour);

		return parkingFee;
		
	}

	void print()
	{
		cout << "*** Parking Ticket ***" << endl;
		car.print();
		cout << "Minutes in violation: " << minutes << endl;
		cout << "Parking Fee: $" << calcParkingFee() << endl;
	}

	ParkingTicket(ParkedCar &c, int m = 0) : car(c), minutes(m) { }


private:
	ParkedCar &car;
	int minutes;

};

