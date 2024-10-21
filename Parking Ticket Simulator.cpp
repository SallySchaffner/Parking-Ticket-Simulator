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


    char again = 'y';

    do
    {
        cout << "Enter minutes on meter and car minutes: ";
        cin >> meterMinutes >> carMinutes;
        if (meterMinutes - carMinutes < 0)
        {
            cout << "Enter make, model, and color of car: ";
            cin >> make >> model >> color;
            cout << "Enter owner license number: ";
            cin >> license;

            cout << "Enter officer's name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter officer's badge number: ";
            cin >> badgeNumber;

            ParkedCar car(make, model, color, license, carMinutes);
            ParkingMeter meter(meterMinutes);
            PoliceOfficer officer(name, badgeNumber);
            ParkingTicket ticket(car, meter, officer);

            cout << endl;
            ticket.print();
            cout << endl;
        }
        else
            cout << endl << "No Parking Violation" << endl;

        cout << "Check another vehicle (y/n)?";
        cin >> again;

    } while (again == 'y');

    return 0;

}

