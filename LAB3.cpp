//1
/*
#include <iostream>
using namespace std;
int main() {
	int inNum;
	cout << "Enter a number between 0 and 35: ";
	cin >> inNum;
	cout << endl;
	if (inNum > 35 || inNum < 0) {
		cout << "Invalid integer.";
		return 0;
	}
	if (inNum >= 0 && inNum <= 9) {
		cout << inNum;
	}
	else {
		cout << static_cast<char>(('A' + inNum) - 10);
	}
	return 0;
}
*/

//2
/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	cin >> fixed;
	cin >> setprecision(2);
	cout << fixed;
	cout << setprecision(2);
	double dayCost, salesTax, totalCost, totalBilling;
	int yourDiscount, daysSpent, rooms;
	//request user of all required information on their stay
	cout << "Enter the cost of renting one room: $";
	cin >> dayCost;
	cout << endl;
	cout << "Enter the number of rooms booked: ";
	cin >> rooms;
	cout << endl;
	cout << "Enter the number of days booked: ";
	cin >> daysSpent;
	cout << endl;
	cout << "Enter the sales tax(as a percent): ";
	cin >> salesTax;
	cout << endl;
	//calculate total discount
	if (rooms >= 10 && rooms < 20) {
		yourDiscount = 10;
	}
	else if (rooms >= 20 && rooms < 30) {
		yourDiscount = 20;
	}
	else if (rooms >= 30) {
		yourDiscount = 30;
	}
	else {
		yourDiscount = 0;
	}
	if (daysSpent >= 3 && daysSpent < 7) {
		yourDiscount += 5;
	}
	//calculating total cost & total billing
	totalCost = dayCost * rooms * daysSpent;
	totalCost = totalCost - (totalCost * (yourDiscount / 100.00));
	totalBilling = totalCost + (totalCost * (salesTax / 100.00));
	//output information/costs for user
	cout << "Total cost of renting a room: $" << dayCost << endl
		<< "Active discount: " << yourDiscount << "%" << endl
		<< "Total number of rooms booked: " << rooms << endl
		<< "Total number of days booked: " << daysSpent << endl
		<< "Total cost of renting rooms: $" << totalCost << endl
		<< "Salex tax: " << salesTax << "%" << endl
		<< "Total billing amount: $" << totalBilling << endl;
	return 0;
}
*/

//3
/*
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	double a1, a2, a3, a4, a5, b, bodyFat, bFatPercent = 0, bodyWeight, wristMeasurement, waistMeasurement,
			hipMeasurement‍, forearmMeasurement;
	char sex;

	cout << "Enter sex(Mm/Ff): ";
	cin >> sex;
	cout << endl;

	if ((sex == 'M' || sex == 'm')) {
		cout << "Enter body weight: ";
		cin >> bodyWeight;
		cout << endl << "Enter wrist measurement: ";
		cin >> wristMeasurement;
		cout << endl;
		a1 = (bodyWeight * 1.082) + 94.42;
		a2 = wristMeasurement * 4.15;
		b = a1 - a2;
		bodyFat = bodyWeight - b;
		bFatPercent = bodyFat * 100 / bodyWeight;
	}
	else if ((sex == 'F' || sex == 'f')) {
		
		cout << "Enter body weight: ";
		cin >> bodyWeight;
		cout << endl << "Enter wrist measurement: ";
		cin >> wristMeasurement;
		cout << endl << "Enter waist measurement: ";
		cin >> waistMeasurement;
		cout << endl << "Enter hip measurement: ";
		cin >> hipMeasurement‍;
		cout << endl << "Enter forarm measure: ";
		cin >> forearmMeasurement;
		cout << endl << "Enter body weight: ";
		cin >> bodyWeight;
		cout << endl;
		a1 = (bodyWeight * 0.732) + 8.987;
		a2 = wristMeasurement / 3.140;
		a3 = waistMeasurement * 0.157;
		a4 = hipMeasurement‍ * 0.249;
		a5 = forearmMeasurement * 0.434;
		b = a1 + a2 + a3 + a4 + a5;
		bodyFat = bodyWeight - b;
		bFatPercent = bodyFat * 100 / bodyWeight;
	}

	cout << "Your Body Fat Percentage is: " << bFatPercent;
	return 0;
}
*/