#include <iostream>
using namespace std;
int main() {
	int userNumber;
	cout << "Welcome to the algorithm that finds prime numbers that til' the number you give to us." << endl;
	cout << "Please set a maximum limit to find prime numbers: ";
	cin >> userNumber;
	
	// V Here we won't equal i to 1 because 1 is not a prime number so it's nonsense. We'll start from 2. V
	for (int i = 2; i <= userNumber; i++) {
		int Counter = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				Counter++;
			}
		}
		if (Counter == 2) {
			cout << i << ", ";
		}


	}









	return 0;
}