#include <iostream>
#include <cmath>

double sumup(int N);
double sumdown(int N);


int main()
{
  int N;
  double dif;
  std::cout.precision(15); std::cout.setf(std::ios::scientific);

  for(int N = 1; N <= 500; N += 1)
    {
      dif = (sumdown(N)-sumup(N))/(sumup(N)+sumdown(N));

	std::cout << N << "\t" << dif << std::endl; 
      
    }

  return dif;
}

double sumup(int N)
{
  int n;
  double sum = 0;
  for(n = 1; n <= N; n++)
    {
      sum = sum + 1.0/n;
    }
  return sum;
}

double sumdown(int N)
{
  float n;
  double sum = 0;
  for(n = N; n >= 1; n--)
    {
      sum = sum + 1/n;
    }
  return sum;
}



