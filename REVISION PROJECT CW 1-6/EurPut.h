
//#include "EurOption.h"


class EurPut //:// public EurOption
{ 
	double T, K;
	double d_plus(double S0, double sigma, double r);
	double d_minus(double S0, double sigma, double r);
	//double EurPut::N(double x);
	
	
public:

	EurPut(double T_, double K_) { T = T_; K = K_; } //: EurOption(T_, K_) {};
	//double DeltaByBSFormula(double S0, double sigma, double r);
	//double ThetaByBSformula(double S0, double sigma, double r, double T, double K);
	double PriceByBSFormula(double S0, double sigma, double r);
	//double GammaByBSFormula(double S0, double sigma, double r, double T);
	
};


//
