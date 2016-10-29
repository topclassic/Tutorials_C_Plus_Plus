/*
#include <iostream>
#include <ctime>

using namespace std;
void getSeconds(unsigned long *sec);

int main() {
	unsigned long sec;


	getSeconds(&sec); // send address to function getSeconds

	// print the actual value
	cout << "Number of seconds :" << sec << endl;

	system("PAUSE");
	return 0;
}

void getSeconds(unsigned long *sec) {

	*sec = time(NULL); // set value to pointer
	
	return;
}
*/
/*
#include <iostream>
using namespace std;

// function declaration:
double getAverage(int * arr, int size);

int main() {
	// an int array with 5 elements.
	int balance[5] = { 1000, 2, 3, 17, 50};

	// pass pointer to the array as an argument.
	// double avg;
	// avg = getAverage(balance, 5);

	// output the returned value 
	cout << "Average value is: " << getAverage(balance, 5) << endl;
	//cout << sizeof(balance) << endl;
	system("PAUSE");
	return 0;
}

double getAverage(int * arr, int size) {
	int sum = 0;

	for (int i = 0; i < size; ++i) {
		sum += arr[i]; // int * arr[i] for array string
	}

	double avg = double(sum) / size; // change type sum int to  double

	return avg;
}
*/