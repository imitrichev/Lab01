#include <iostream>
#include <math.h>

//2. y=x^3 cos(x) - e^(2x)

using namespace std

double addend1(double x)
{
	return x*x*x + cos(x);
}

double addend2(double x)
{
	return exp(2*x);
}
double y(double x)
{
	return  addend1(x)-addend2(x);
}

int main()
{
   cout<<y(0)<<endl;
   cout<<"Hello world!"<<endl;
   return 0;
}
