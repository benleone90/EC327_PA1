#include <iostream>
using namespace std;

// Compare function to determine number of different positions in ternary
int compare(int num1, int num2){
	int count = 0;
	// For loop 5 times to account for #s 0-100 in base 3
	for (int i = 0; i < 5; i++){
		int rem1 = num1 % 3; // Modulo 3 is equivilent to changing base to 3
		int rem2 = num2 % 3;

		num1 /= 3;
		num2 /= 3;

		// If statement to compare remainders; if =/= then it is part of the hamming distance
		if (rem1 == rem2){
			continue;
		} else {
			count += 1;
		}
	}
	return count;
};


int main()
{
	int num1, num2, count;

	cout << "Enter two numbers between 0 and 100\n";
	cin >> num1 >> num2;

	// This count variable is scoped to main() and can be returned
	count = compare (num1, num2);

	cout << "Hamming distance between " << num1 << " and " << num2 << " in ternary is: " << count << endl;

	return 0;
}