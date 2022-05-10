#include "CComplex.h"
#include <iostream>
#include <math.h>
using namespace std;
CComplex::CComplex(void) {
	im = 0.0;
	re = 0.0;
}
CComplex::CComplex(double im, double re) {
	this->im = im;
	this->re = re;
}
void CComplex::display() {
	cout << re;
	if (im < 0.0) {
		cout << " ";
	}
	else cout << "+";
	cout << "i*" << abs(im) << endl;
};
CComplex CComplex::operator+(CComplex v) {
	CComplex u = *this;
	CComplex result;
	result.re = u.re + v.re;
};
CComplex CComplex::operator-(CComplex v) {
return CComplex(this->re-v.re,this->im - v.im)
};
CComplex CComplex::operator-() {
	return CComplex(-this->re, -this->im);
};
double CComplex::operator~() {
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
};
CComplex CComplex::operator*(CComplex v) {
return CComplex(this->re*v.re-this->im*v.im,this->re*v.im+this->im*v.re
	)
	;
CComplex CComplex::operator++() {
	
};
CComplex CComplex::operator--() {
	
};