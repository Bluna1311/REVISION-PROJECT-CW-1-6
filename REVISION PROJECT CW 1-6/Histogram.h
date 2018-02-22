#pragma once
#include <vector>
#include <fstream>
using namespace std;
class Histogram
{
public:
	Histogram(double Xmin, double  Xmax, double BinNumber);
	void add(double x);
	void GetResult(vector<long> &Data,vector<double> &BinBoundries);
	void WriteToStream(ostream &os, vector<long> Data, vector <double> BinBoundries);
private:
	double M_Binsize;
	double M_XMax;
	double M_XMin;
	double M_NumberOfTotalBins;
	vector <double> hist;
};