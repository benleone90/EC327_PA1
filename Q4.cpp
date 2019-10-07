#include <iostream>
using namespace std;

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

	if (isNumber(s)){
		for (int i = s.size() - 1; i >= 0; --i){
		s_rev += s[i];
		}
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