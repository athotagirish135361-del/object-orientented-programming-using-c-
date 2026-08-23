//Write a C++ program to add complex numbers using friend function.
#include<iostream>
using namespace std;

class Complex
{
	private:
		float real, imag;
		public:
			Complex() : real(0), imag(0){}
			
			void input()
			{
				cin >> real >> imag;
				}
				
				void output()
				{
					cout << real << " + " << imag << "i" << endl;
				}
				
				friend Complex addComplex(Complex, Complex);
			};
			Complex addComplex(Complex c1, Complex c2)
			{
				Complex temp;
				temp.real = c1.real + c2.real;
				temp.imag = c1.imag + c2.imag;
				return temp;
			}
			
			int main()
			{
				Complex c1, c2, results;
				cout << "Enter first complex numbers (real and imaginary parts): ";
				c1.input();
				cout << "Enter second complex numbers (real and imaginary parts): ";
				c2.input();
				results = addComplex(c1,c2);
				cout << "Sum: ";
				results.output();
				return 0;
			}
			
