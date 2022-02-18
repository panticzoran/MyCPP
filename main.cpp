#include <iostream>

using namespace std;


int main() {
	
	int N, K, socksToBeKept, found;

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

	
	for (int i=0; i<N; i++) {
		found=0;
		if (socks[i] != 0) {
			for (int j=1; j<N; j++) {
				if (socks[i] == socks[j]) {
					socksToBeKept++;
					socksToBeKept++;
					socks[i]=0;
					socks[j]=0;
					found=1;
					j=N;
				}
			}
			socksToBeKept=socksToBeKept+found;
		}

	}
	



	
	cout << "The number of socks that may be kept: " << socksToBeKept;

return 0;
}

