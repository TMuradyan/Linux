#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
	int real;
	int imaginary;
public:
	Complex();
	Complex(int real, int imaginary);
	Complex operator+(const Complex& other);
	Complex operator-(const Complex& ohter);
	Complex operator*(const int& val);
	bool operator<(const Complex& other);
	double abs() const;
	void print();
};

#endif
