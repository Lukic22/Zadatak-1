#pragma once
#include <string>
using namespace std;
class ComplexNumber {
public:
	ComplexNumber(int real, int imaginary);
	ComplexNumber();
	void set_real(int real);
	void set_imaginary(int imaginary);
	ComplexNumber(ComplexNumber k1, ComplexNumber k2);
	string get();
private:
	int real;
	int imaginary;
};

