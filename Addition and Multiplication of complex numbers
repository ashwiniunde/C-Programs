#include<iostream>
using namespace std;
class Complex{
	public:
		float real;
		float imag;
		Complex()
		{
			real=0.0;
			imag=0.0;
		}
	friend ostream & operator<<(ostream& output,Complex &a)
	{
		output<<"\nEnter Real & Imaginary part: ";
		return output;
	}
	friend istream & operator>>(istream& input,Complex &a)
	{
		input>>a.real>>a.imag;
		return input;
	}
    Complex operator+(Complex &a)
    {
    	Complex temp;
    	temp.real=real+a.real;
    	temp.imag=imag+a.imag;
    	return temp;
	}
	Complex operator*(Complex &a)
	{
		Complex t;
		t.real=real*a.real-imag*a.imag;
		t.imag=real*a.imag+imag*a.real;
		return t;
	}
    
};
int main()
{
	Complex c1,c2,c3,c4;
	cout<<c1;
	cin>>c1;
	cout<<c2;
	cin>>c2;
	c3=c1+c2;
	cout<<"Addition of Complex Number = "<<c3.real<<"+"<<c3.imag<<"i";
	c4=c1*c2;
	cout<<"\nMultiplication of Complex Number = "<<c4.real<<"+"<<c4.imag<<"i";
	return 0;
}
