#include "Uber.h"
#include <string.h>
#include <string>

//DRIVER CLASS FUNCTIONS WORKING..............
driver::driver()
{
	name = nullptr;
	number = nullptr;
	address = nullptr;
	cnic = nullptr;
	trips = 0;
	rating = 0;
}

void driver::setName(char* n)
{
	int length = 0;

	for (length = 0; n[length] != '\0'; length++);

	name = new char[length + 1];

	for (int i = 0; n[i] != '\0'; i++)
	{
		name[i] = n[i];
	}
	name[length] = '\0';
}

void driver::setNumber(char* n)
{
	int length = 0;

	for (length = 0; n[length] != '\0'; length++);

	number = new char[length + 1];

	for (int i = 0; n[i] != '\0'; i++)
	{
		number[i] = n[i];
	}
	number[length] = '\0';
}

void driver::setAddress(char* add)
{
	int length = 0;

	for (length = 0; add[length] != '\0'; length++);

	address = new char[length + 1];

	for (int i = 0; add[i] != '\0'; i++)
	{
		address[i] = add[i];
	}
	address[length] = '\0';
}

void driver::setCnic(char* c)
{
	int length = 0;

	for (length = 0; c[length] != '\0'; length++);

	cnic = new char[length + 1];

	for (int i = 0; c[i] != '\0'; i++)
	{
		cnic[i] = c[i];
	}
	cnic[length] = '\0';
}

void driver::setTrips(int t)
{
	trips = t;
}

void driver::setRating(float r)
{
	rating = r;
}

const char* driver::getName()
{
	int length = 0;

	for (length = 0; name[length] != '\0'; length++);

	char* n = new char[length + 1];

	for (int i = 0; name[i] != '\0'; i++)
	{
		n[i] = name[i];
	}
	n[length] = '\0';

	return n;
}

const char* driver::getNumber()
{
	int length = 0;

	for (length = 0; number[length] != '\0'; length++);

	char* num = new char[length + 1];

	for (int i = 0; number[i] != '\0'; i++)
	{
		num[i] = number[i];
	}
	num[length] = '\0';

	return num;
}

const char* driver::getAddress()
{
	int length = 0;

	for (length = 0; address[length] != '\0'; length++);

	char* add = new char[length + 1];

	for (int i = 0; number[i] != '\0'; i++)
	{
		add[i] = address[i];
	}
	add[length] = '\0';

	return add;
}

const char* driver::getCnic()
{
	int length = 0;

	for (length = 0; cnic[length] != '\0'; length++);

	char* c = new char[length + 1];

	for (int i = 0; cnic[i] != '\0'; i++)
	{
		c[i] = cnic[i];
	}
	c[length] = '\0';

	return c;
}

const int driver::getTrips()
{
	return trips;
}

const float driver::getRating()
{
	return rating;
}

void driver::displayDriver()
{
	cout << "Driver Name : " << name << endl;
	cout << "Driver Contact Number : " << number << endl;
	cout << "Driver Address : " << address << endl;
	cout << "Driver CNIC : " << cnic << endl;
	cout << "Driver Total Trips : " << trips << endl;
	cout << "Driver Overall Rating : " << rating << endl << endl;
}

//RIDER CLASS FUNCTIONS WORKING.............
rider::rider()
{
	name = nullptr;
	number = nullptr;
	tripsC = 0;
	rating = 0;
}

void rider::setName(char* n)
{
	int length = 0;

	for (length = 0; n[length] != '\0'; length++);

	name = new char[length + 1];

	for (int i = 0; n[i] != '\0'; i++)
	{
		name[i] = n[i];
	}
	name[length] = '\0';
}

void rider::setNumber(char* n)
{
	int length = 0;

	for (length = 0; n[length] != '\0'; length++);

	number = new char[length + 1];

	for (int i = 0; n[i] != '\0'; i++)
	{
		number[i] = n[i];
	}
	number[length] = '\0';
}
void rider::setTrips(int t)
{
	tripsC = t;
}

void rider::setRating(float r)
{
	rating = r;
}

const char* rider::getName()
{
	int length = 0;

	for (length = 0; name[length] != '\0'; length++);

	char* n = new char[length + 1];

	for (int i = 0; name[i] != '\0'; i++)
	{
		n[i] = name[i];
	}
	n[length] = '\0';

	return n;
}

const char* rider::getNumber()
{
	int length = 0;

	for (length = 0; number[length] != '\0'; length++);

	char* num = new char[length + 1];

	for (int i = 0; number[i] != '\0'; i++)
	{
		num[i] = number[i];
	}
	num[length] = '\0';

	return num;
}

const int rider::getTrips()
{
	return tripsC;
}

const float rider::getRating()
{
	return rating;
}

void rider::displayRider()
{
	cout << "Rider Name : " << name << endl;
	cout << "Rider Number : " << number << endl;
	cout << "Trips Canceled : " << tripsC << endl;
	cout << "Rider Rating : " << rating << endl;
}

//RIDE CLASS FUNCTIONS WORKING..............
ride::ride()
{
	pickup = nullptr, destination = nullptr, vehicleNumber = nullptr, category = nullptr, promoCode = nullptr, startTime = nullptr, endTime = nullptr;

	id = 0;

	baseFare = 0, perKM = 0, perMinute = 0, discount = 0;
}

void ride::setDriver(const driver& obj)
{
	dri = obj;
}

void ride::setRider(const rider& obj)
{
	rid = obj;
}

void ride::setPickup(char* p)
{
	int length = 0;

	for (length = 0; p[length] != '\0'; length++);

	pickup = new char[length + 1];

	for (int i = 0; p[i] != '\0'; i++)
	{
		pickup[i] = p[i];
	}
	pickup[length] = '\0';
}

void ride::setDestination(char* d)
{
	int length = 0;

	for (length = 0; d[length] != '\0'; length++);

	destination = new char[length + 1];

	for (int i = 0; d[i] != '\0'; i++)
	{
		destination[i] = d[i];
	}
	destination[length] = '\0';
}

void ride::setVehicleNumber(char* v)
{
	int length = 0;

	for (length = 0; v[length] != '\0'; length++);

	vehicleNumber = new char[length + 1];

	for (int i = 0; v[i] != '\0'; i++)
	{
		vehicleNumber[i] = v[i];
	}
	vehicleNumber[length] = '\0';
}

void ride::setCategory(char* c)
{
	int length = 0;

	for (length = 0; c[length] != '\0'; length++);

	category = new char[length + 1];

	for (int i = 0; c[i] != '\0'; i++)
	{
		category[i] = c[i];
	}
	category[length] = '\0';

	if (strcmp(category, "Bike") == 0)
	{
		baseFare = 60, perMinute = 3.67, perKM = 6.17;
	}
	else if (strcmp(category, "Auto") == 0)
	{
		baseFare = 50.71, perMinute = 2.79, perKM = 12.09;
	}
	else if (strcmp(category, "Mini") == 0)
	{
		baseFare = 65, perMinute = 3.63, perKM = 8.13;
	}
	else if (strcmp(category, "Go") == 0)
	{
		baseFare = 80, perMinute = 4.54, perKM = 10.16;
	}
	else if (strcmp(category, "UberX") == 0)
	{
		baseFare = 100, perMinute = 8.54, perKM = 15.16;
	}
}

void ride::setPromo(char* p)
{
	int length = 0;

	for (length = 0; p[length] != '\0'; length++);

	promoCode = new char[length + 1];

	for (int i = 0; p[i] != '\0'; i++)
	{
		promoCode[i] = p[i];
	}
	promoCode[length] = '\0';
}

void ride::setStartTime(char* s)
{
	int length = 0;

	for (length = 0; s[length] != '\0'; length++);

	startTime = new char[length + 1];

	for (int i = 0; s[i] != '\0'; i++)
	{
		startTime[i] = s[i];
	}
	startTime[length] = '\0';
}

void ride::setArrivalTime(char* e)
{
	int length = 0;

	for (length = 0; e[length] != '\0'; length++);

	endTime = new char[length + 1];

	for (int i = 0; e[i] != '\0'; i++)
	{
		endTime[i] = e[i];
	}
	endTime[length] = '\0';
}

void ride::setId(int i)
{
	id = i;
}

void ride::setDiscount()
{
	if (strcmp(promoCode, "pk8976") == 0)
	{
		discount = 25;
	}
	else
	{
		discount = 0;
	}
}

const float ride::calculateBill()
{
	int time = stoi(endTime) - stoi(startTime);

	float bill = time * perMinute;

	bill += baseFare;

	return bill;
}

void ride::displayInfo()
{
	cout << "\n\nDriver Information....." << endl;
	dri.displayDriver();

	cout << "\n\nRider Information....." << endl;
	rid.displayRider();

	cout << "\n\nRide Information......" << endl;
	cout << "Pickup Location : " << pickup << endl;
	cout << "Destination Location :  " << destination << endl;
	cout << "Category : " << category << endl;
	cout << "Vehicle Number : " << vehicleNumber << endl;
	cout << "Tracking ID : " << id << endl;
	cout << "Start TIme : " << startTime << endl;
	cout << "Arrival Time : " << endTime << endl;
	cout << "Total Fare : " << calculateBill() << endl;
	cout << "Fare of distance : " << perKM << " per Kilo Meters" << endl;
	cout << "Fare of time : " << perMinute << " per Minute" << endl;
	cout << "Discount : " << discount << "%" << endl;
}