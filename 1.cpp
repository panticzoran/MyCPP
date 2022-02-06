#include <iostream>
#include <string>
using namespace std;

int main() {

	string name,surname;

	cout << "Please enter your name: ";
	cin >> name;

	cout << "\nPlease enter your surname: ";
	cin >> surname;

	cout << '\n'
			<< "Hello, "
			<< name
			<< ", with your surname "
			<< surname
			<< '\n';

return 0;

}