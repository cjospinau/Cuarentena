#include <iostream>
#include <cmath>

double triangle(double a, double b, double A);
double Heron1(double a, double b, double c);
double Heron2(double a, double b, double c);
double error(double a, double b, double c);


int main(void)
{
  double pi = std::acos(-1);
  double A;
  double a = 0.5;
  double b = 0.1;
  
 
  for(A = pi/36; A < pi; A = A + pi/36)
   {
   double c = triangle(a,b,A);
   std::cout << A*(180/pi) << "\t" << triangle(a,b,A) << "\t" << Heron1(a,b,c)<< "\t" << Heron2(a,b,c) << "\t" << error(a,b,c) << "\t" <<  std::endl;
   }

   return 0;
}

double triangle(double a, double b, double A)
{
  
  double c = std::sqrt(a*a + b*b - 2*a*b*std::cos(A));

       return c;
}

double Heron1(double a, double b, double c)
{
  double d = (a+b+c)/2;
  double S1;
  S1 = std::sqrt(d*(d-a)*(d-b)*(d-c));
  return S1;
}

double Heron2(double a, double b, double c)
{
  double S2;
  S2 =1.0/4*std::sqrt((a+b+c)*(c-a+b)*(c+a+b)*(a+b-c));
  return S2;
}

double error(double a, double b, double c)
{
  double dif;
  dif =  std::abs((Heron1(a,b,c) - Heron2(a,b,c)))/Heron1(a,b,c);
  return dif;
}


