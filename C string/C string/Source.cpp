#include <iostream>

using namespace std;

int StringLenght(const char* aString);

int main() {

	cout << "C strings\n" << endl;
	/* Without the functions
		char aString[6];

		aString[0] = 'H';
		aString[1] = 'E';
		aString[2] = 'L';
		aString[3] = 'L';
		aString[4] = 'O';
		aString[5] = '\0';

		const char* anotherString = "Hello";

		cout << aString << endl;//outputs HELLO
		cout << anotherString << endl;//Outputs Hello
		cout << *anotherString << endl;//Outputs H
		*/

		//Part2 Counting the word
	char cString[] = "Hello";

	cout << "The length of " << cString << " is: " << StringLenght(cString) << endl;

	return 0;
}

int StringLenght(const char* aString)
{
	int Lenght = 0;

	const char* p = aString;

	if (aString != nullptr) {
		while (*p != '\0') {
			Lenght++;
			p++;
		}
	}
	return Lenght;
}