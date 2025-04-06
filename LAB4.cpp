//1
/*
#include <iostream>
using namespace std;
int main() {
	int sum = 0, input = 0;
	while (cin) {
		cout << "Enter an integer value: ";
		cin >> input;
		cout << endl;
		sum += input;
	}
	cout << "Sum: " << sum << endl;
}
*/

//2
/*
#include <iostream>
using namespace std;
int main() {
	int n, first = 1, second = 1, third = 0, temp;
	cout << "Enter the number of digits you'd like to see of the Fibonacci sequece: ";
	cin >> n;
	cout << endl << third << ", " << second << ", " << first;
	for (int i = 0; i < n - 3; i++) {
		temp = first;
		first = first + second;
		third = second;
		second = temp;
		cout << ", " << first;
	}
	return 0;
}
*/

//3
/*
#include <iostream>
using namespace std;
int main() {
	int sum = 0, input = 0;
	while (cin) {
		cout << "Enter an integer value: ";
		cin >> input;
		cout << endl;
		if (input < 0) continue;
		sum += input;
	}
	cout << "Sum: " << sum << endl;
}
*/

//4
/*
#include <iostream>
using namespace std;
int main() {
	int aPop, bPop, years = 0;
	double aGrowth, bGrowth;
	cout << "Enter town A's population: ";
	cin >> aPop;
	cout << endl << "Enter town A's growth rate as a percentage: ";
	cin >> aGrowth;
	cout << endl << "Enter town B's population: ";
	cin >> bPop;
	cout << endl << "Enter town B's growth rate as a percentage: ";
	cin >> bGrowth;
	cout << endl;
	if (aPop > bPop || aGrowth < bGrowth) {
		cout << "Check your values!";
		return 0;
	}
	while (aPop < bPop) {
		aPop += int(aPop * (aGrowth / 100));
		bPop += int(bPop * (bGrowth / 100));
		years++;
	}
	cout << "It will take " << years << " years for town A to grow larger than town B.";
	return 0;
}
*/

//5
/*
#include <iostream>
#include <cmath>
int factorial(int);
using namespace std;
int main() {
	int n;
	double totalE = 2;
	cout << "Enter n, we will approximate e to this point: ";
	cin >> n;
	cout << endl;
	for (int i = 2; i <= n; i++) {
		totalE += static_cast<double>(1) / (factorial(i));
	}
	cout << "E = " << totalE;
	return 0;
}
int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}
*/

//6
/*
#include <iostream>
using namespace std;
string reverseString(string);
int main() {
	string input, reverse;
	cout << "Enter a word, and I will test whether or not it is a palindrome: ";
	cin >> input; 
	cout << endl;
	reverse = reverseString(input);
	if (input == reverse) {
		cout << input << " is a palindrome.";
	}
	else {
		cout << input << " is NOT a palindrome.";
	}
	return 0;
}
string reverseString(string s) {
	string rev;
	for (int i = s.length() - 1; i >= 0; i--) {
		rev += s[i];
	}
	return rev;
}
*/

//7
/*
#include <iostream>
#include <cmath>
using namespace std;
void reverseDigit(int&);
int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	cout << endl;
	reverseDigit(n);
	cout << "Your integer reversed is: " << n;
}
void reverseDigit(int& num) {
	int reversed = 0;
	while (num != 0) {
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}
	num = reversed;
}
*/
