#pragma once
#include "PoliceOfficer.h"
#include <iostream>


class ParkingTicket {
private:
    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer;
    double fineAmount;

public:
    ParkingTicket(const ParkedCar& c, const ParkingMeter& m, const PoliceOfficer& o)
        : car(c), meter(m), officer(o) {
        fineAmount = calculateFine();
    }

    double calculateFine() const {
        int overparkedMinutes = car.getMinutesParked() - meter.getMinutesPurchased();
        if (overparkedMinutes <= 0) return 0.0;

        int hoursOver = static_cast<int>(ceil(overparkedMinutes / 60.0));
        double fine = 25.0 + (hoursOver - 1) * 10.0;
        return fine;
    }

    void generateTicket() {
        cout << "Parking Ticket" << endl;
        cout << "Officer: " << officer.getName() << " | Badge Number: " << officer.getBadgeNumber() << endl;
        cout << "License Plate:" << car.getLicenseNumber() << endl;
        cout << "Make: " << car.getMake() << " | Model: " << car.getModel() << " | Color: " << car.getColor() << endl;
        cout << "Minutes: " << meter.getMinutesPurchased() << " | Minutes Parked: " << car.getMinutesParked() << endl;
        cout << "Fine: $" << fineAmount << endl;
    }
};