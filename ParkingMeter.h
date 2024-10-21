#pragma once
class ParkingMeter
{
public:
	void setMinutes(int m) { minutes = m; }
	int getMinutes() { return minutes;  }

	ParkingMeter(int m = 0) : minutes(m) {}

private:
	int minutes;
};

