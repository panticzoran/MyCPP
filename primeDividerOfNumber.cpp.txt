#include <iostream>
//#include <string>
using namespace std;
int primeDividerOfNumber(int);
bool isPrimeNumber(int);

// Calculates  the number that is a sum of the previous number in the array, and the greatest prime divider of the number
// The array starts with number 2, and the next number is the sum of the previous number and the greatest prime divider of the number
int main() {

	int n, number;

	cout << "Please enter the number: ";
	cin >> n;
	number = 2;

	for (int i=2; i<=n; i++) {
		
		number = number + primeDividerOfNumber(number);
	}

	cout << "The number is: " << number;

return 0;
}

// Function returns the prime divider of a number, so the greatest prime divider of a number
int primeDividerOfNumber(int nrToProcess) {
	int pDON;
	pDON=nrToProcess;
	for (int j=2; j<=nrToProcess; j++) {
		if (nrToProcess%j==0) {
			if (isPrimeNumber(j)) {
				pDON=j;
			}
		}
	}
	
	return pDON;
}

// Function checks if the number is prime
bool isPrimeNumber(int nrToCheck) {
	bool result;
	result = true;
	for (int k=2; k<nrToCheck; k++) {
		if (nrToCheck%k==0) {
			result = false;
			k=nrToCheck;
		}
	}
	return result;
}