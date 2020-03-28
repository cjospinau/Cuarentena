#include <iostream>
#include <cmath>

double sumup(int N);
double sumdown(int N);


int main()
{
  int N;
  double dif1;
  double dif2;
  std::cout.precision(15); std::cout.setf(std::ios::scientific);

  for(int N = 1; N <= 300; N += 1)
    {
      dif1 = (sumdown(N)-sumup(N))/(sumdown(N));
      dif2 = (sumdown(N)-sumup(N))/(sumup(N));

      std::cout << N << "\t" << dif1 << "\t"<< dif2 << std::endl; 
      
    }

  return dif1;
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



