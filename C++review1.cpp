// Programmer: Parth Sharma
// Date:       09/12/2019
// File:       C++review1.cpp
// Professor:  A. Clifton


#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> values;

	cout << "Enter values, press Ctrl-D when finished." << endl;

	int v;
	while (cin >> v) {
		cout << "You entered " << v << endl;
		values.push_back(v);
	}

	cout << "You entered " << values.size() << "values." << endl;

	while (!values.empty()) {
		cout << values.back() << endl;
		values.pop_back();
	}

	return 0;
}
