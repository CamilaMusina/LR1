#include "Antivirus.h"

Antivirus::Antivirus() 
{
	name = "No name";
	n = 0;
}

void Antivirus:: Initialization() {
	cin >> name >> n;
}

void Antivirus::print() {
	cout << "Name: " << name << " Number of viruses: " << n << endl;
}

string Antivirus::Name() {
	return name;
}

int Antivirus::virus() {
	return n;
}
