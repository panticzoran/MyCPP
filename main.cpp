#include <iostream>
//#include <string>
using namespace std;

int main() {

	int n, number;

	cout << "Please enter the number: ";
	cin >> n;
	number = 2;

	for (int i=2; i<=n; i++) {
		
		number = number + primeDividerOfNumber(number);
	}

	cout << "The number is: " + number;

return 0;
}

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

bool isPrimeNumber(int nrToCheck) {
	bool result;
	result = true;
	for (int k=2; k<nrToCheck; k++) {
		if (nrToCheck%k==0) {
			result = false;
			k=nrToCheck;
		}
	}
	retunr result;
}