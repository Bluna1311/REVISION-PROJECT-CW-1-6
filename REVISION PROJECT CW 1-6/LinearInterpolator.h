#pragma once
#include <map>

using namespace std;

class LinearInterpolator
{
public:
	void add(double X, double Y);
	double value(double x);
private:
	map<double, double> M1;
};
