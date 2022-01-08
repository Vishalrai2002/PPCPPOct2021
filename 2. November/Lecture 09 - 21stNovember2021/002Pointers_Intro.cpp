#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int* xptr = &x;

	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "&x = " << &x << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl;

	cout << endl;

	char ch = 'A';
	char* chptr = &ch;
	cout << "ch = " << ch << endl;
	cout << "sizeof(ch) = " << sizeof(ch) << endl;
	cout << "&ch = " << &ch << endl;
	cout << "chptr = " << chptr << endl;
	cout << "sizeof(chptr) = " << sizeof(chptr) << endl;

	return 0;
}