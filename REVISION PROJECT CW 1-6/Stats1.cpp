#include "Stats1.h"
#include <cmath>
void Stats1::add(double X)
{
	M_entries++;
	M_Sum = M_Sum + X;

}

double Stats1::mean()
{
	return M_Sum / M_entries;

}

double Stats1::StdDev()
{

	return pow((M_Sum), 2)/M_entries - pow(mean(),2); 

}
void Stats2::add(double x, double y)
{
	M_EntriesXY++;
	X.add(x);
	Y.add(y);

}


double Stats2::Cov()
{
	return (M_sumXY / M_EntriesXY - X.mean() * Y.mean());
}
double Stats2::Corr()
{
	return Cov() / sqrt((pow(X.StdDev(), 2) * pow(Y.StdDev(), 2), 0.5));
}

double Stats2::Grad()
{

	return Cov() / pow(X.StdDev(), 2);

}

double Stats2::M_intercept()
{
	return Y.mean() - Grad() * X.mean();

}