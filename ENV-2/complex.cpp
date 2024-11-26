#include "complex.h"
#include <cmath>
#include <iostream>

Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(int real, int imaginary) : real(real), imaginary(imaginary) {}

Complex Complex::operator+(const Complex& source)
{
	Complex result;
	result.imaginary  = imaginary + source.imaginary;
	result.real = real + source.real;
	return result;
}

Complex Complex::operator-(const Complex& source)
{
	Complex result;
	result.real  = real - source.real;
	result.imaginary = imaginary - source.imaginary;
	return result;
}

Complex Complex::operator*(const int& val)
{
	Complex result(*this);
	result.real *= val;
	result.imaginary *= val;
	return result;
}

bool Complex::operator<(const Complex& source)
{
	return abs() < source.abs();
}


double Complex::abs() const
{
	return std::sqrt(imaginary * imaginary + real * real);
}

void Complex::print()
{
	if(imaginary == 0)
		std::cout << real;
	if(imaginary < 0)
		std::cout << real << imaginary << 'i';
	if(imaginary > 0)
		std::cout << real << '+' << imaginary << 'i';

	std::cout << std::endl;
}
