#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// 1st part
	for(int i=1; i<=2*n-1; i++) {
		cout << "*";
	}

	cout << endl;

	// 2nd Part
	for(int i=1; i<=n-1; i++) {
		// in the ith row, print n-i stars
		for(int j=1; j<=n-i; j++) {
			cout << "*";
		}

		// followed by 2i-1 spaces
		for(int j=1; j<=2*i-1; j++) {
			cout << " ";
		}

		// followed by n-i stars
		for(int j=1; j<=n-i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	// 3rd Part

	for(int i=2; i<=n-1; i++) {
		// in the ith row, print i stars
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		// followed by 2(n-i)-1 spaces
		for(int j=1; j<=2*(n-i)-1; j++) {
			cout << " ";
		}

		// follwedby by i stars
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	// 4th part
	for(int i=1; i<=2*n-1; i++) {
		cout << "*";
	}

	cout << endl;

	return 0;
}