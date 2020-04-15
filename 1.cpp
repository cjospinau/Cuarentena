#include <iostream>
#include <cmath>

double sin_pade(double x);
double sin_aux(double u);

int main(void)
{
	std::cout.precision(16);
	std::cout.setf(std::ios::scientific);
	double pi = std::acos(-1);
	double x;
	for(x = 0.01; x <= 2*pi; x = x + 0.01 )
	{

		std::cout << x*(180/pi) << "\t" <<  sin_pade(x) << std::endl;

	}

	return x;
}

double sin_pade(double x)
{
	double sinx;
	double pi = std::acos(-1);
	int n = int(x/(pi/2));
	double u;

	 if ( std::fabs(x) > pi/2 && n%2 == 0)
	 {

            u = std::pow(-1,n/2)*(x - n/2*pi);
            return sin_pade(u);
	 }

  if ( std::fabs(x) > pi/2 && n%2 != 0)
    {
      u = std::pow(-1,(n+1)/2)*(x - (n+1)/2*pi);
      return sin_pade(u);
    }

	if( x >= 0 && std::abs(x) < std::pow(10,-8) )
	{
		return x;

	}

	if(std::abs(x) > pi/6 && std::abs(x) <= pi/2 )
	{
		double u = x/3;
		sinx = (3 - 4*std::pow(sin_aux(u),2))*sin_aux(u);
		return sinx;
	}

	if( std::abs(x) >= std::pow(10,-8) && std::abs(x) <= pi/6)
	{
		sinx = sin_aux(x);
		return sinx;
	}

	return 0;
}


double sin_aux(double u)
{
	double sinu;

	sinu = u*((1-(29593/207636)*std::pow(u,2) + (34911/7613320)*std::pow(u,4) - (479249/11511339840)*std::pow(u,6))/(1 + (1671/69212)*std::pow(u,2) + (97/351384)*std::pow(u,4) + (2623/1644477120)*std::pow(u,6)));

	return sinu;

}
