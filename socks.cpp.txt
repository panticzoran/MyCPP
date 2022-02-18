#include <iostream>

using namespace std;


int main() {
	
	int N, K, socksToBeKept, found, nrOfPairs, nrOfSingles;

	cout << "Please enter the number of socks: ";
	cin >> N;

	int socks[N];

	cout << "Please enter the maximal number of pairs of socks: ";
	cin >> K;

	cout << "Please enter the sock sizes for all socks: ";
	for (int i=0; i<N; i++) {
		cin >> socks[i];		
	}

	socksToBeKept = 0;
	nrOfPairs=0;
	nrOfSingles=0;

	
	for (int i=0; i<N; i++) {
		found=1;
		if (socks[i] != 0) {
			for (int j=i+1; j<N; j++) {
				if (socks[i] == socks[j]) {
					nrOfPairs++;
					socks[i]=0;
					socks[j]=0;
					found=0;
					j=N;
				}
			}
			nrOfSingles=nrOfSingles+found;
		}
	}

	if (nrOfPairs > K) {
		socksToBeKept=2*K+nrOfSingles+1;
	}
	else {
		socksToBeKept=2*nrOfPairs+nrOfSingles;
	}
	
	cout << "The number of socks that may be kept: " << socksToBeKept;

return 0;
}

