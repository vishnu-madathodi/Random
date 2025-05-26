#include<iostream>
using namespace std;

int main() {

	string str;
	cout << "Enter the string: ";
	cin >> str;

	const int size = 26;
	int count[size] = { 0 };

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			count[str[i] - 'a']++; //uses ASCII values for a, b, c... to calculate index
		}
	}

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (count[str[i] - 'a'] == 1) {
				cout << "First non-repeating alphabet: " << str[i] << endl;
				return 0;
			}
		}
	}

}