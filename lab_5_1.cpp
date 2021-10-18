﻿#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y); 
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = h(1, s + t) + h(s, s - t) - h(t, sqrt(pow(s, 2) + pow(t, 2)));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y) 
{
	return (pow(x, 2) + pow (y, 2)) / (1 + pow(x, 2) + pow(x, 2) * pow(y,2));
}