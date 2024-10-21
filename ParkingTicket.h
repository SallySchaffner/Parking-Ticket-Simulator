#pragma once
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

class ParkingTicket
{
public:
	double calcParkingFee()
	{
		const int FirstHour = 25.;
		const int OtherHour = 10.;
		int parkingFee = 0;

		int hoursOver = (car.getMinutes() - meter.getMinutes()) / 60;
		int minutesOver = (car.getMinutes() - meter.getMinutes()) % 60;
		
		if (hoursOver == 0 && minutesOver > 0)
		{
			parkingFee = FirstHour;
		}
		else if (hoursOver == 1)
		{
			parkingFee = FirstHour;
			if (minutesOver > 0)
				parkingFee += FirstHour;
		}
		else if (hoursOver > 1)
		{
			parkingFee = FirstHour + (hoursOver - 1) * OtherHour;
			if (minutesOver > 0)
				parkingFee += OtherHour;
		}

		return parkingFee;
		
	}

	void print()
	{
		cout << "*** Parking Ticket ***" << endl;
		officer.print();
		car.print();
		cout << "Meter Minutes: " << meter.getMinutes() << " Minutes Parked: " << car.getMinutes() << endl;
		cout << "Parking Fee: $" << calcParkingFee() << endl;
	}

	ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o) : car(c), meter(m), officer(o) {}


private:
	ParkedCar car;
	ParkingMeter meter;
	PoliceOfficer officer;

};

