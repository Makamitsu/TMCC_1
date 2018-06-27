#include <iostream>

using namespace std;

/*
* EXERCICE 1
* Sum of all numbers multiple of 3 or 5 up to a given limit
*/

unsigned long long getSumOf3or5(int pMax) {
	unsigned long long sum = 0;
	for (int i = 3; i <= pMax; i += 3)
		sum += i;
	for (int i = 5; i <= pMax; i += 5)
		sum += i;
	return sum;
}

void main() {

	cout << "**************************\n";
	cout << "******* EXERCICE 1 *******\n";
	cout << "**************************\n";

	unsigned long max;

	cout << "Indiquez une limit sup:";
	cin >> max;
	cout << "\n - Result is: " << getSumOf3or5(max) << endl;

	system("PAUSE");
}