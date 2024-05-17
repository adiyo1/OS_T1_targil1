#include <math.h>

// Function declaration for calculating the Poisson distribution
long double poisson(double lambda, int k) {
    long double result = exp(-lambda) * powl(lambda, k);
    long double factorial = 1.0;
    for (int i = 1; i <= k; i++) {
        factorial *= i;
    }
    return result / factorial;
}