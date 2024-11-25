#pragma once
class ParkingMeter
{
public:
	void setMinutesPurchased(int m) { minutesPurchased = m; }
	int getMinutesPurchased() const { return minutesPurchased;  }

	ParkingMeter(int m = 0) : minutesPurchased(m) {}

private:
	int minutesPurchased;
};

