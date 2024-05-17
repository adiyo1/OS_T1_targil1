#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* function to calculate the Poisson distribution
   Calculate the Poisson probability using the formula:
     P(X = k) = (e^(-lambda) * lambda^k) / k!
     where:
       e is Euler's number (approximately 2.71828)
       lambda is the average rate of occurrences
       k is the number of occurrences
       e^(-lambda) is the probability of 0 occurrences
       lambda^k is the probability of k occurrences
       k! (factorial of k) is the number of permutations of k occurrences 
*/
long double poisson(double lambda, int k) {
    return expl(-lambda) * powl(lambda, k) / tgamma(k + 1);
}

int main(int argc, char *argv[]) {
    // Check if the number of arguments is correct
    if (argc != 3) {
        printf("Error, missig aruments\n");
        return 1;
    }

    // Convert terminal arguments to right types
    long double lambda = strtold(argv[1], NULL);
    int k = atoi(argv[2]);

    // calculate the Poisson distribution
    long double num_result = poisson(lambda, k);

    // print result
    printf("%.20Lf\n", num_result);

    return 0;
}
