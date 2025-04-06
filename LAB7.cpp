#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct salesPersonRec {
	int id = 0;
	int quarter[4] = { {0}, {0}, {0} , {0} };
	double totalSale = 0;
};

void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]);
void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize);
void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);

int main() {
	string userFileInput;
	const int empListSize = 6;
	double totalByQuarter[4];
	cout << "Enter the name of the file containing the salespersons' ID data : ";
	cin >> userFileInput; cout << endl;
	ifstream employeeFile(userFileInput);
	if (!employeeFile) {
		cout << "Invalid File Name. Exiting program.";
		return 1;
	}

	salesPersonRec salesPersonData[empListSize];
	initialize(employeeFile, salesPersonData, empListSize);
	employeeFile.close();
	cout << "Enter the name of the file containing the file containing the sales data: ";
	cin >> userFileInput; cout << endl;
	ifstream salesDataFile(userFileInput);
	if (!salesDataFile) {
		cout << "Invalid File Name. Exiting program.";
		return 1;
	}
	cout << "Enter the name of the output file: ";
	cin >> userFileInput; cout << endl;
	ofstream resultFile(userFileInput);
	cout << fixed << showpoint << setprecision(2);
	resultFile << fixed << showpoint << setprecision(2);
	getData(salesDataFile, salesPersonData, empListSize);
	saleByQuarter(salesPersonData, empListSize, totalByQuarter);
	totalSaleByPerson(salesPersonData, empListSize);
	printReport(resultFile, salesPersonData, empListSize, totalByQuarter);
	maxSaleByPerson(resultFile, salesPersonData, empListSize);
	maxSaleByQuarter(resultFile, totalByQuarter);
}

void initialize(ifstream& indata, salesPersonRec list[], int listSize) {
	for (int i = 0; i < listSize; i++) {
		indata >> list[i].id;
		list[i].quarter[0] = 0;
		list[i].quarter[1] = 0;
		list[i].quarter[2] = 0;
		list[i].quarter[3] = 0;
		list[i].totalSale = 0;
	}
}

void getData(ifstream& infile, salesPersonRec list[], int listSize) {
	int id, quarter, sales;
	while (infile >> id >> quarter >> sales) {
		switch (quarter) {
		case 1:
		case 2:
		case 3:
			quarter = 0;
			break;
		case 4:
		case 5:
		case 6:
			quarter = 1;
			break;
		case 7:
		case 8:
		case 9:
			quarter = 2;
			break;
		default:
			quarter = 3;
		}
		for (int i = 0; i < listSize; i++) {
			if (list[i].id == id) {
				list[i].quarter[quarter] += sales;
			}
		}
	}
}

void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]) {
	double sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = 0;
		for (int j = 0; j < listSize; j++) {
			sum += list[j].quarter[i];
		}
		totalByQuarter[i] = sum;
	}
}

void totalSaleByPerson(salesPersonRec list[], int listSize) {
	for (int i = 0; i < listSize; i++) {
		list[i].totalSale = 0;
		for (int j = 0; j < 4; j++) {
			list[i].totalSale += list[i].quarter[j];
		}
	}
}

void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]) {
	outfile << "----------- Annual Sales Report ----------" << endl;
	outfile << "ID         QT1        QT2      QT3       QT4     Total" << endl;
	outfile << "_____________________________________________________________" << endl << endl;
	for (int i = 0; i < listSize; i++) {
		outfile << list[i].id;
		for (int j = 0; j < 4; j++) {
			outfile << "      " << list[i].quarter[j];
		}
		outfile << "      " << list[i].totalSale << endl;
	}
	double quarterTotal = 0;
	outfile << "Total";
	for (int i = 0; i < 4; i++) {
		outfile << "      " << saleByQuarter[i];
	}
	outfile << endl << endl;
}

void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize) {
	int maxSalesIndex = 0;
	double currMax = list[0].totalSale;
	for (int i = 1; i < listSize; i++) {
		if (list[i].totalSale > currMax) {
			currMax = list[i].totalSale;
			maxSalesIndex = i;
		}
	}
	outData << "Max Sale by SalesPerson: ID = " << list[maxSalesIndex].id << ", Amount = $" << list[maxSalesIndex].totalSale << endl;
}

void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]) {
	int maxQuarterIndex = 0;
	double currMax = saleByQuarter[0];
	for (int i = 1; i < 4; i++) {
		if (saleByQuarter[i] > currMax) {
			currMax = saleByQuarter[i];
			maxQuarterIndex = i;
		}
	}
	outData << "Max Sale by Quarter: Quarter = " << (maxQuarterIndex + 1) << ", Amount = $" << currMax;
}
