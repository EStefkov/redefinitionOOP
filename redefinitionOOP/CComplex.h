#pragma once
class CComplex
{
protected:
	double re, im;
public:
	CComplex(void);
	CComplex(double, double);
	void display();
	CComplex operator +(CComplex);
	CComplex operator -();
	CComplex operator -(CComplex);
	CComplex operator *(CComplex);
	double operator ~();
	CComplex operator ++();
	CComplex operator --();
};

