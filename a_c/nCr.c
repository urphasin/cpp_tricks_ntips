#include <stdio.h>

long long nCr(int n, int r) {
  if (r > n || r < 0 || n < 0) {
    return 0;
  }

  long long result = 1;
  for (int i = 0, j = r; i < r; i++, j--) {
    result *= (n - i) / j;
  }
  return result;
}

double binomial(double p, double n, double r) {
  double ans = nCr(n, r) * pow(p, r) * pow((1 - p), n-r);
}

int main() {
  
  int n = 10, r = 2;
  printf("nCr = %lld\n", nCr(n, r));

  printf("P(X) = ", binomial(0.262, 10, 2));

  return 0;
}