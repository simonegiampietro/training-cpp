 #include <iostream>

using namespace std;

int main()
{
	cout << "* Converter *" << endl;
	string name;
	float millimeters;
	cout << "Insert your name --> ";
	// cin.ignore(); // Eventually, clear first char in stream
	getline(cin, name); // Not formatted input
	while (name.length() == 0) {
		cout << "ERROR! Please insert a not blank word --> ";
		// cin.ignore();
		getline(cin, name);
	}
	cout << name << ", please, insert dimension in mm --> ";
	cin >> millimeters;
	cin.clear(); // If user insert "." it loop
	while (millimeters <= 0.0f) {
		cout << "ERROR! Please insert a not negative number --> ";
		cin >> millimeters;
		cin.clear();
	}
	cout << millimeters << "mm are converted in " << millimeters / 1000.0f << "m." << endl;
	return 0;
}