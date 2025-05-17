#include <iostream>
using namespace std;

#ifndef H_personType
#define H_personType
#include <string>

using namespace std;

class personType
{
public:
    void print() const {
        cout << firstName << " " << lastName;
    }
    //Function to output the first name and last name
    //in the form firstName lastName.

    void setName(string first, string last) {
        firstName = first;
        lastName = last;
    }
    //Function to set firstName and lastName according 
    //to the parameters.
    //Postcondition: firstName = first; lastName = last

    string getFirstName() const {
        return firstName;
    }
    //Function to return the first name.
    //Postcondition: The value of the data member firstName
    //               is returned.

    string getLastName() const {
        return lastName;
    }
    //Function to return the last name.
    //Postcondition: The value of the data member lastName
    //               is returned.

    personType(string first = "", string last = "") {
        firstName = first;
        lastName = last;
    }
    //constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are empty strings.
    //Postcondition: firstName = first; lastName = last  

private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
};

#endif


#ifndef dateType_H
#define dateType_H

class dateType
{
public:
    void setDate(int month, int day, int year) {
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    //Function to set the date.
    //The member variables dMonth, dDay, and dYear are set  
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day;
    //               dYear = year

    int getDay() const {
        return dDay;
    }
    //Function to return the day.
    //Postcondition: The value of dDay is returned.

    int getMonth() const {
        return dMonth;
    }
    //Function to return the month.  
    //Postcondition: The value of dMonth is returned.

    int getYear() const {
        return dYear;
    }
    //Function to return the year.     
    //Postcondition: The value of dYear is returned.

    void printDate() const {
        cout << dMonth << "-" << dDay << "-" << dYear;
    }
    //Function to output the date in the form mm-dd-yyyy.

    dateType(int month = 1, int day = 1, int year = 1900) {
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    //Constructor to set the date
    //The member variables dMonth, dDay, and dYear are set 
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day; dYear = year;
    //               If no values are specified, the default 
    //               values are used to initialize the member
    //               variables.

private:
    int dMonth; //variable to store the month
    int dDay;   //variable to store the day
    int dYear;  //variable to store the year
};

#endif

class doctorType : public personType {
public:
    doctorType(string specialty = "", string first = "", string last = "") {
        docSpecialty = specialty;
        setName(first, last);
    }
    string getSpecialty() const {
        return docSpecialty;
    }
    void print() const {
        personType::print();
        cout << ", " << docSpecialty;
    }
private:
    string docSpecialty;
};

class billType {
public:
    billType(int iD = 0, double charge = 0.0) {
        patID = iD;
        charges = charge;
    }
    void setID(int newID) {
        patID = newID;
    }
    void setCharge(double newCharge) {
        charges = newCharge;
    }
    int getID(int newID) const {
        return patID;
    }
    double getCharge() const {
        return charges;
    }
    void newCharge(double chargeINC) {
        charges += chargeINC;
    }
    void print() const {
        cout << "Patient: " << patID << ", Charges: " << charges;
    }
private:
    int patID;
    double charges;
};

class patientType : public personType {
public:
    patientType(int id = 0, int age = 0, dateType birthD = dateType(), dateType admissionD = dateType(), dateType dischargeD = dateType(), doctorType doc = doctorType()) {
           patID = id;
           patAge = age;
           dob = birthD;
           admission = admissionD;
           discharge = dischargeD;
           attendingPhys = doc;
       }
    void print() const {
        cout << "Patient: " << patID << endl;
        cout << "Age: " << patAge << endl;
        dob.printDate(); cout << endl;
        cout << "Attending Physician: "; attendingPhys.print(); cout << endl;
        cout << "Admission date: "; admission.printDate(); cout << endl;
        cout << "Discharge date: "; discharge.printDate(); cout << endl;
    }
    void setDOB(int month, int day, int year) {
        dob.setDate(month, day, year);
    }
    dateType getDOB() const {
        return dob;
    }
    void setAdmission(int month, int day, int year) {
        admission.setDate(month, day, year);
    }
    dateType getAdmission() const {
        return admission;
    }
    void setDischarge(int month, int day, int year) {
        discharge.setDate(month, day, year);
    }
    dateType getDischarge() const {
        return discharge;
    }
    void setID(int newID) {
        patID = newID;
    }
    int getID() const{
        return patID;
    }
    void setAge(int newAge) {
        patAge = newAge;
    }
    int getAge() const {
        return patAge;
    }
    void setDoc(doctorType newDoc) {
        attendingPhys = newDoc;
    }
    doctorType getDoc() const {
        return attendingPhys;
    }
private:
    int patID;
    int patAge;
    dateType dob;
    doctorType attendingPhys;
    dateType admission;
    dateType discharge;
};

int main() {
    doctorType doc("Silly Doctor", "Taariq", "Abdus-Samad");
    doc.print(); cout << endl;
    patientType pat1(1313, 23, dateType(11, 5, 2002), dateType(11, 5, 2024), dateType(6, 5, 2025), doc);
    pat1.print();
    billType bill1(1313, 100.42);
    bill1.print();
}
