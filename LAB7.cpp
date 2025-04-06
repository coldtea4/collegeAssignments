#include <iostream>
#include <fstream>
using namespace std;
struct salesPersonRec {
	int id;
	int quarter[4] = { {0}, {0}, {0} , {0} };
	double totalSale;
};

void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]);
void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize);
void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);

int main() {

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
		infile >> id >> quarter >> sales;
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
				list[i].quarter[quarter] = sales;
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
			cout << "   " << list[i].quarter[j];
		}
		cout << "   " << list[i].totalSale << endl << endl;
	}
	//next two methods will print the rest of the output
}

void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize) {
	cout << "Total";
	cout 
}

void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]) {

}