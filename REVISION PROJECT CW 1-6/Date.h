#pragma once
#include "basic.h"
class Date 
{
public:
	Date(unsigned int D, unsigned int M, unsigned int Y);
	unsigned int M_Serial; // public only for testing use. 
	void AddDay(int D);
	void AddMonth(int M);
	void AddYears(int Y);
private:

};

