#include "Histogram.h"
#include <vector>
#include <iostream>

using namespace std;

Histogram::Histogram(double Xmin, double  Xmax, double BinNumber)
{
	M_Binsize = (Xmin - Xmin) / BinNumber;
	M_NumberOfTotalBins = BinNumber + 2;
	M_XMax = Xmax;
	M_XMin = Xmin;
	hist.resize(M_NumberOfTotalBins) ;
}

void Histogram::add(double x)
{
	if (x < M_XMin)
		hist[0] ++;
	if (x > M_XMax)
		hist[M_NumberOfTotalBins - 1] ++;
	if(x > M_XMin && x< M_XMax)
	{
		int point = int((x - M_XMin) / M_Binsize) + 1;
		hist[point] ++;
	}
	return;
}

void Histogram::GetResult(vector<long> &Data, vector<double> &BinBoundries)
{
	Data.resize(hist.size());
	BinBoundries.resize(hist.size());

	for (int i = 0; i != hist.size(); i++)
	{
		BinBoundries[i] = M_XMin + i*M_Binsize;
		Data[i] = hist[i];
	}
	return;
}
void Histogram::WriteToStream(ostream &os, vector<long> Data, vector <double> BinBoundries)
{


	for (int i = 0; i != hist.size(); i++)
		os << "for right bountry :" << BinBoundries[i] << "the histogram value is " << Data[i];
	return;
}

