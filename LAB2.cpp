//LAB 2

//Question 1:
/*
a) x = 78,y = 86,z = 18,ch = #
b) x = 8,y = 86,z = 18,ch = 7
c) x = 78,y = 86,z = 18,ch = " "
d) x = 78,y = 6,z = 18,ch = " "
e) x = 78,y = 86,z = 18,ch = CH GETS NO VALUE
*/

//Question 2:
/*
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	ifstream inFile("inData.txt");
	ofstream outFile("outData.txt");
	string fName, lName, department;
	double monthlyGrossSalary, monthlyBonus, taxes, paycheck,
		distanceTraveled, travelTime, averageSpeed, costOfCup, salesAmount;
	int cupsSold;

	inFile >> fName >> lName >> department >> monthlyGrossSalary >> monthlyBonus >> taxes >>
		distanceTraveled >> travelTime >> cupsSold >> costOfCup;
	paycheck = monthlyGrossSalary + ((monthlyGrossSalary)*(monthlyBonus / 100));
	paycheck = paycheck - ((paycheck)*(taxes / 100));
	averageSpeed = distanceTraveled / travelTime;
	salesAmount = cupsSold * costOfCup;
	outFile << fixed << setprecision(2);
	outFile << "Name: " << fName << " " << lName << ", Department: " 
		<< department << endl << "Monthly Gross Salary: $" << monthlyGrossSalary 
		<< ", Monthly Bonus: " << monthlyBonus << "%, Taxes: " << taxes << "%" << endl
		<< "Paycheck: $" << paycheck << endl << endl << "Distance Traveled: " << distanceTraveled
		<< " miles, Traveling Time: " << travelTime << " hours" << endl << "Average Speed: "
		<< averageSpeed << " miles per hour" << endl << endl << "Number of Coffee Cups Sold: "
		<< cupsSold << ", " << "Cost: $" << costOfCup << " per cup" << endl << "Sales Amount = $" 
		<< salesAmount << endl;
	inFile.close();
	outFile.close();
}
*/

//Question 3:
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double weightKg, weightLb;
	cout << fixed << setprecision(2);
	cout << "Enter your weight in kilograms: ";
	cin >> weightKg;
	cout << endl;
	weightLb = weightKg * 2.2;
	cout << "Your weight in kilograms: " << weightKg << " kg" << endl
		<< "Your weight in pounds: " << weightLb << " lbs" << endl;
}
*/

//Question 4:
/*
#include <iostream>
using namespace std;
int main() {
	double yardLength, treeRad, spaceBtwnTrees, totalTreeOccupation;
	int numTrees;
	double PI = 3.14;
	cout << "Enter the length of your yard: ";
	cin >> yardLength;
	cout << endl << "Enter the radius of a fully grown tree: ";
	cin >> treeRad;
	cout << endl << "Enter the required space between trees: ";
	cin	>> spaceBtwnTrees;
	cout << endl;
	numTrees = (int)(yardLength / (2 * treeRad + spaceBtwnTrees));
	totalTreeOccupation = numTrees * (PI * treeRad * treeRad);
	cout << "Number of trees that can be planted: " << numTrees << endl
		<< "Total space occupied by the trees: " << totalTreeOccupation << endl;
}
*/
