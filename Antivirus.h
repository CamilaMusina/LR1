#ifndef Antivirus_H
#define Antivirus_H
#include<iostream>
#include<string>

using namespace std;

class Antivirus {
	string name;
	int n;

public:
	Antivirus();

	void Initialization();
	void print();
	string Name();
	int virus();
};

#endif
