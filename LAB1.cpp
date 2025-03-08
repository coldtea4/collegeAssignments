//LAB 1

//Question 1:
/*
The code prints
1 3 6 5 7
a = 7,b = 6,c = 6
*/

//Question 2:
/*
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if(a < b && a < c) {
		cout << a << " ";
		if(b < c) {
			cout << b << " " << c;
		}
		else {
			cout << c << " " << b;
		}
	}
	if (b < a && b < c) {
		cout << b << " ";
		if (a < c) {
			cout << a << " " << c;
		}
		else {
			cout << c << " " << a;
		}
	}
	if (c < a && c < b) {
		cout << c << " ";
		if (a < b) {
			cout << a << " " << b;
		}
		else {
			cout << b << " " << a;
		}
	}
}
*/

//Question 3:
/*
#include <iostream>
using namespace std;
int main(){
	double radius;
	double area;
	double circumference;
	const double PI = 3.14;
	cout << "Enter the radius: ";
	cin >> radius;
	cout << endl;
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	cout << "Area = " << area << endl;
	cout << "Circumference = " << circumference << endl;
	return 0;
}
*/

//Question 4:
/*
#include <iostream>
using namespace std;
int main() {
	double num;
	cout << "Enter a decimal number: ";
	cin >> num;
	if (num >= 0) {
		if (num >= (int)num + 0.5) {
			cout << "Rounded number: " << (int)num + 1 << endl;
		}
		else {
			cout << "Rounded number: " << (int)num << endl;
		}
	}
	else{
		if (num <= (int)num - 0.5) {
			cout << "Rounded number: " << (int)num - 1 << endl;
		}
		else {
			cout << "Rounded number: " << (int)num << endl;
		}
	}
	return 0;
}
*/

//Question 5:
/*
#include <iostream>
using namespace std;
int main() {
	int seconds, hours, minutes;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << endl;
	minutes = (seconds % 3600)/60;
	hours = seconds / 3600;
	seconds = seconds % 60;
	cout << hours << ":" << minutes << ":" << seconds << endl;
}
*/

//Question 6:
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	const double cartonCapacity = 3.78;
	double milkTotal;
	int cartons;
	double cost;
	double profit;
	cout << "Enter the total amount of milk produced: ";
	cin >> milkTotal;
	cout << endl;
	cartons = (int)round(milkTotal / cartonCapacity);
	cout << "Number of cartons needed: " << cartons << endl;
	cost = milkTotal * 0.38;
	profit = cartons * 0.27;
	cout << fixed;
	cout << setprecision(2);
	cout << "Total cost of producing milk: $" << cost << endl << "Profit: $" << profit << endl;
	return 0;
}
*/