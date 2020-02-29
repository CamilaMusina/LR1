#include <iostream>
#include <vector>
#include "Antivirus.h"

using namespace std;

int main()
{
	int max = 0;
	int i = 0;
	vector<Antivirus> antiviruses;
	cout << "Number of antiviruses "; cin >> i;
	antiviruses.resize(i);

	cout << endl << "Initialize antiviruses ";
	for (i = 0; i < antiviruses.size(); i++) {
		antiviruses[i].Initialization();
		if (max < antiviruses[i].virus()) max = antiviruses[i].virus();
	}
	for (auto pos : antiviruses) {
		pos.print();
	}
	cout << "Max number of antiviruses: " << max << endl;

	return 0;
}
