#include "Uber.h"

int main()
{
	const int size = 100;
	char name[size] = { '\0' }, number[size] = { '\0' }, address[size] = { '\0' }, cnic[size] = { '\0' };
	int trips = 0;
	float rating = 0;
		
	//Setting Driver Info
	driver d1;
	cout << "Enter the Name of Driver : ";
	cin.getline(name, size);
	cout << "Enter the Number of Driver : ";
	cin.getline(number, size);
	cout << "Enter the Address of Driver : ";
	cin.getline(address, size);
	cout << "Enter the CNIC of Driver : ";
	cin.getline(cnic, size);
	cout << "Enter the Total Trips of Driver : ";
	cin >> trips;
	cout << "Enter the rating of Driver : ";
	cin >> rating;
	d1.setName(name);
	d1.setNumber(number);
	d1.setAddress(address);
	d1.setCnic(cnic);
	d1.setTrips(trips);
	d1.setRating(rating);

	//Setting Rider Info
	rider r1;
	cout << "\n\nEnter the Name of Rider : ";
	cin.ignore();
	cin >> name;
	cout << "Enter the Number of Rider : ";
	cin.ignore();
	cin >> number;
	cout << "Enter the Trips canceled by Rider : ";
	cin >> trips;
	cout << "Enter the Rating of Rider : ";
	cin >> rating;
	r1.setName(name);
	r1.setNumber(number);
	r1.setTrips(trips);
	r1.setRating(rating);

	char pickup[size] = { '\0' }, destination[size] = { '\0' }, vehicle[size] = { '\0' }, category[size] = { '\0' }, promoCode[size] = { '\0' }, startTime[size] = { '\0' }, endTime[size] = { '\0' };
	int id = 0;

	//Setting Ride Info
	ride obj;
	cout << "\n\nEnter the Pickup Location : ";
	cin.ignore();
	cin.getline(pickup, size);
	cout << "Enter the Dsetination Location : ";
	cin.ignore();
	cin.getline(destination, size);
	cout << "Enter the Vehicle Number : ";
	cin.ignore();
	cin.getline(vehicle, size);
	cout << "Enter the Category : ";
	cin.ignore();
	cin.getline(category, size);
	cout << "Enter the Promo Code (without spaces) : ";
	cin >> promoCode;
	cout << "Enter the Start Time (24 HR FORMAT HHMM) : ";
	cin >> startTime;
	cout << "Enter the End Time (24 HR FORMAT HHMM) : ";
	cin >> endTime;
	obj.setDriver(d1);
	obj.setRider(r1);
	obj.setPickup(pickup);
	obj.setDestination(destination);
	obj.setVehicleNumber(vehicle);
	obj.setCategory(category);
	obj.setPromo(promoCode);
	obj.setDiscount();
	obj.setStartTime(startTime);
	obj.setArrivalTime(endTime);

	obj.displayInfo();

	return 0;
}