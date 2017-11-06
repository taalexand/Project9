#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	string lastname = "";
	string firstname = "";
	float salary, pay = 0;
	ifstream indata;
	ofstream outdata;
	indata.open("why.txt");
	outdata.open("whynot.txt");

	indata >> lastname >> firstname >> salary >> pay;
	outdata << lastname << " " << firstname << " " << salary << " " << pay << endl;
	cout << lastname << " " << firstname << " " << salary << " " << pay << endl;

	indata >> lastname >> firstname >> salary >> pay;
	outdata << lastname << " " << firstname << " " << salary << " " << pay << endl;
	cout << lastname << " " << firstname << " " << salary << " " << pay << endl;

	indata >> lastname >> firstname >> salary >> pay;
	outdata << lastname << " " << firstname << " " << salary << " " << pay << endl;
	cout << lastname << " " << firstname << " " << salary << " " << pay << endl;

	indata.close();
	outdata.close();


	return 0;
}





