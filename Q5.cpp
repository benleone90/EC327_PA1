#include <iostream>
using namespace std;

int main()
{
	char letter;
	int opor;

	cout << "Enter your character and operation:\n";
	cin >> letter >> opor;

	// Input validation to ensure it is a lower or uppercase letter
	if (!((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))){
		cout << "Illegal character" << endl;
		return 1;
	}

	// Switch-case for each of the use cases
	switch(opor){
		// Change-case case
		case 1:
			if (letter >= 'a' && letter <= 'z'){
				letter -= 32;
			} else if (letter >= 'A' && letter <= 'Z'){
				letter += 32;
			}
			cout << "Result: " << letter << endl;
			break;
		// Change case and folded alphabet case
		case 2:
			if (letter >= 'a' && letter <= 'z'){
				letter -= 32;
				letter = 'Z' - letter + 'A';
			} else if (letter >= 'A' && letter <= 'Z'){
				letter += 32;
				letter = 'z' - letter + 'a';
			}
			cout << "Result: " << letter << endl;
			break;
		// Lower/Upper case alphabet wrap
		case 3:
			if ((letter >= 'a' && letter <= 't') || (letter >= 'A' && letter <= 'T')){
				letter += 6;
			} else if (letter >= 'U' && letter <= 'Z') {
				letter += 12;
			} else {
				letter -= 52;
			}
			cout << "Result: " << letter << endl;
			break;
		// Default case when no operation is input or not one of above
		default:
			cout << "Illegal Operation" << endl;
			break;
	}
	return 0;
}