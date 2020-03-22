#include <iostream>
#include <cmath>

typedef float REAL;

REAL sum1(int N);
REAL sum2(int N);
REAL sum3(int N);

int main(void)
{
  std::cout.precision(6); std::cout.setf(std::ios::scientific);

  std::cout << sum1(6) << "\n" << sum2(6) << "\n" << sum3(6) << "\n" << std::endl;
  

  return 0;
}

REAL sum1(int N)
{
  REAL sum = 0;
  int sign = -1;
  for(int n = 1; n <= 2*N; ++n)
    {
      sum += sign*1.0*n/(n+1); //El 1.0 convierte el n en un REAL temporalmente para evitar el error de truncamiento
      sign *= -1;   // sign *= -1 es lo mismo que sign = sign * (-1) 
    }
  
  return sum;
}

REAL sum2(int N)
{
  REAL suma1 = 0;
  REAL suma2 = 0;
  for(int n = 1; n <= N; ++n)
    {
      suma1 = suma1 + (2.0*n-1)/(2.0*n);
      suma2 = suma2 + 2.0*n/(2.0*n+1);   
    }
  
  return suma2 - suma1;
}

REAL sum3(int N)
{
  REAL sum = 0;
  for(int n = 1; n <= N; ++n)
    {
      sum += 1.0/(2*n*(2*n+1)); 
        
    }
  
  return sum;
}
