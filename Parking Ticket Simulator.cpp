// Parking Ticket Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

int main()
{
    string make, model, color, license, name, badgeNumber;
    int meterMinutes, carMinutes;

    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer(car, meter, "Steve Smith", "PD100596");

    char again = 'y';

    do
    {
        cout << "Enter minutes on meter and car minutes: ";
        cin >> meterMinutes >> carMinutes;
        
        cout << "Enter make, model, and color of car: ";
        cin >> make >> model >> color;
        cout << "Enter owner license number: ";
        cin >> license;

        car.setCar(make, model, color, license, carMinutes);
        meter.setMinutes(meterMinutes);
        officer.setCarInfo(car, meter);
        officer.writeTicket();

        cout << "Check another vehicle (y/n)?";
        cin >> again;

    } while (again == 'y');

    return 0;

}

