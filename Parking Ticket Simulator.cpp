// Parking Ticket Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

int main() 
{
  ParkedCar car("Hyundai", "Sonata", "Silver", "A12345", 350);
  ParkingMeter meter(60);
  PoliceOfficer officer("Mark Smith", "B45678");
  ParkingTicket ticket(car, meter, officer);

  officer.issueTicket(car, meter);

  return 0;

}

