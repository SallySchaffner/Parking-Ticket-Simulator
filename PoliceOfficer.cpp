#include "PoliceOfficer.h"
#include "ParkingTicket.h"

void PoliceOfficer::issueTicket(const ParkedCar& car, const ParkingMeter& meter) {
    if (car.getMinutesParked() > meter.getMinutesPurchased()) {
        ParkingTicket ticket(car, meter, *this);
        ticket.generateTicket();
    }
    else {
        cout << "No parking violation" << endl;
    }
}
