#include "EurCall.h"
#include <iostream>
#include "EurPut.h"
using namespace std;



int main()
{

	cout << "values of stike and Time To expire " << endl;
	double T, K;
	cin >> K >> T;
	if (T <= 0)
	{
		cout << "error in Time Value" << endl;
		system("pause");
		return 0;
	}
	cout << "stock price, sigma and rate of return value" << endl;
	double S0, Sigma, R;
	cin >> S0 >> Sigma >> R;
	if (S0 <= 0) {
		cout << "error in Stock Value" << endl;
		system("pause");
		return 0;
	}
	if (R <= 0) {
		cout << "error in Rate Of Return Value" << endl;
		system("pause");
		return 0;
	}

	cout << " call (1) or put (1) pricing ? " << endl;
	int choice;
	cin >> choice;
	if (choice == 1) {
		EurCall Call(T, K);

		double Call_Value = Call.PriceByBSFormula(S0, Sigma, R);
		cout << Call_Value;
		system("pause");
	}
	if (choice == 2)
	{
			EurPut Put(T, K);

			double Put_Value = Put.PriceByBSFormula(S0, Sigma, R);
			cout << Put_Value;
			system("pause");
	}

















}
