#include <iostream>
using namespace std;

// Input validation to ensure string is all numbers
bool isNumber(string s){
	for (int i = 0; i < s.length(); i++){
		if (isdigit(s[i]) == false){
			return false;
		}
	}
	return true;
}

int main()
{
	string s, s_rev;

	cout << "Enter a number: " << endl;
	cin >> s;
	
	// if-else after checking string is all numbers
	if (isNumber(s)){
		for (int i = s.size() - 1; i >= 0; --i){
		s_rev += s[i];
		}
		// Second if-else case to see if input string is a palindrome
		if (s == s_rev){
			cout << "The number " << s << " is a palindrome." << endl;
		} else {
			cout << "The number " << s << " is not a palindrome." << endl;
		}
	} else {
		cout << "Input only numbers" << endl;
	}
	return 0;
}