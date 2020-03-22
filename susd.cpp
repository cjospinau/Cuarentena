#include <iostream>
#include <cmath>

double sumup(int N);
double sumdown(int N);

int main()
{
  int N;
  std::cout.precision(15); std::cout.setf(std::ios::scientific);

  for(int N = 1; N <= 100; N += 5)
    {
      std::cout << N << "\t" << sumup(N) << "\t" << sumdown(N) << std::endl;
      
    }

  return 0;
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


