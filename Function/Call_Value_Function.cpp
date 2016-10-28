#include <iostream>
#include <stdio.h>

using namespace std;

void swap(char *one, char *two, char *three); // char *one = pointer that points to the "one" string. char one[] = creating an array of 3 bytes to store {'o','n','e'}

void swap(char *one, char *two, char *three) {

	char threex[sizeof(one)];

	strcpy_s(threex, sizeof(one), one); // Save data frome one to threex
	strncpy(one, three, 6); // Change data frome three to one (6 is size of array)
	strcpy_s(three, sizeof(threex), threex); // Change data frome treex to three (It's one)

	return; // Return value char one, two, three
}

int main() {

	char one[6] = "one"; // one[6] equals three[6] for coppy data
	char two[4] = "two"; // 4 - 1 = 3 character ( 1 is \0)
	char three[6] = { 't','h','r','e','e','\0' }; // \0 end text

	cout << "After Swap: " << one << " " << two << " " << three << endl;

	swap(one, two ,three);

	cout << "Before Swap: " << one << " " << two << " " << three << endl;

	system("PAUSE");

	return 0;
}
