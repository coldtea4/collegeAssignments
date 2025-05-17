#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
	string accountHolder = "John Doe";
	double balance = 0;
public:
	void setAccountHolder(const string& name) {
		accountHolder = name;
	}
	void deposit(double amount) {
		balance += amount;
		cout << "$" << amount << " deposited. New balance: $" << balance << endl;
	}
	void withdraw(double amount) {
		if (amount <= balance) {
			balance -= amount;
			cout << "$" << amount << " withdrawn. New balance: $" << balance << endl;
		}
		else {
			cout << "Insufficient funds.";
		}
	}
	void checkBalance() const {
		cout << "Account holder: " << accountHolder << ", Balance: $" << balance << endl;
	}
};

int main() {
	cout << fixed << setprecision(2);
	string myName;
	double amount;
	BankAccount myAccount;
	cout << "Enter account holder's name: ";
	cin >> myName;
	myAccount.setAccountHolder(myName);
	cout << "Initial deposit: " << endl;
	myAccount.deposit(1000.00);
	myAccount.checkBalance();
	cout << "Enter amount to deposit: $";
	cin >>amount;
	myAccount.deposit(amount);
	myAccount.checkBalance();
	cout << "Enter amount to withdraw: $";
	cin >> amount;
	myAccount.withdraw(amount);
	myAccount.checkBalance();


}
