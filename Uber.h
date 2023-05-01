#include <iostream>
using namespace std;

class driver
{
	char *name, *number, *address, *cnic;
	int trips;
	float rating;

public:
	driver();
	void setName(char*);
	void setNumber(char*);
	void setAddress(char*);
	void setCnic(char*);
	void setTrips(int);
	void setRating(float);

	const char* getName();
	const char* getNumber();
	const char* getAddress();
	const char* getCnic();
	const int getTrips();
	const float getRating();

	void displayDriver();
};

class rider
{
	char *name, *number;
	int tripsC;
	float rating;

public:
	rider();
	void setName(char*);
	void setNumber(char*);
	void setTrips(int);
	void setRating(float);

	const char* getName();
	const char* getNumber();
	const int getTrips();
	const float getRating();

	void displayRider();
};

class ride
{
	driver dri;
	rider rid;

	char *pickup, *destination, *vehicleNumber, *category, *promoCode, *startTime, *endTime;
	int id;
	float baseFare, perKM, perMinute, discount;

public:
	ride();

	void setDriver(const driver&);
	void setRider(const rider&);
	void setPickup(char*);
	void setDestination(char*);
	void setVehicleNumber(char*);
	void setCategory(char*);
	void setPromo(char*);
	void setStartTime(char*);
	void setArrivalTime(char*);
	void setId(int);
	void setDiscount();

	const float calculateBill();
	void displayInfo();
};