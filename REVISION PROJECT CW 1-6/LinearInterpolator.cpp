#include "LinearInterpolator.h"
#include <iostream>


void LinearInterpolator::add(double X, double Y)
{
	typedef pair<double, double> MyPair;
	map<double, double>::iterator it = M1.find(X);
		if (it != M1.end())
		{
			cout << "value of Y shall be change from " << it->second << " to " << Y << endl;
			it->second = Y;
	    }
		else 
		{
			M1.insert(MyPair(X, Y));
		}
		return;
}


double LinearInterpolator::value(double X)
{
	map<double, double>::iterator it;
	
	it = M1.end();
	it--;
	if (X > it->first)
		return it->second;
	it = M1.begin();
	if (X < it->first)
		return it->second;
	it = M1.end();
	it--;
	while (it->first > X)
		it--;
	it++;
	double X2 = it->first;
	double Y2 = it->second;
	it--;
    double X1 = it->first;
	double Y1 = it->second;

	double M = (Y2 - Y1) / (X2 - X1);
	double C = it->second;
	cout << "Y value of the given X value is " << M*X + C << endl;
		
	return (M*X + C);




	}


