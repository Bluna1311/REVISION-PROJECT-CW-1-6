#pragma once

class Stats1
{
public :
	double mean();
	double StdDev();
	void add(double X);

private:

	int M_entries{ M_entries = 0 };
	double M_Sum{ M_Sum = 0 };

};

class Stats2
{
public:
	void add(double x, double y);
	double mean();
	double Cov();
	double Corr();

private:
	double M_EntriesXY {M_EntriesXY = 0};
	double M_sumXY{ M_sumXY = 0 };
	Stats1 X;
	Stats1 Y;
	double Grad();
	double M_intercept();
};
