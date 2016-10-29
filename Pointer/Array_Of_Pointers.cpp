/*#include <iostream>

using namespace std;
const int MAX = 3;

int main() {
	int  var[MAX] = { 10, 100, 200 };
	int *ptr[3]; // Set array { , , } three blocks for *ptr

	for (int i = 0; i < MAX; i++) {
		ptr[i] = &var[i]; // Assign the address of integer from var to pointer ptr.
	}

	for (int i = 0; i < MAX; i++) {
		cout << "Value of var: " << i << " = " << *ptr[i] << endl; // Using pointer ptr print value
	}
	system("PAUSE");
	return 0;
}
*/
/*
#include <iostream>

using namespace std;
const int max = 5; //0 1 2 3 4 (5 = \0) 

int main() {

	char * name[max] = { "One",
		"Two",
		"Three",
		"Four",
		"Five"
	};
	for (int i = 0; i < max; i++) {
		cout << "Value of names: " << i << " = " << name[i] << endl;
	}

	system("PAUSE");
	return 0;
}
*/