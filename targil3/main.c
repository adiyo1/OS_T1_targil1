#include <stdio.h>
#include "poisson.h"

int main() {
    long double lambdas[] = {2.0, 2.0, 2.0, 3.0, 100};
    int k[] = {1, 10, 2, 3, 3};
    int i;
    for (i = 0; i < 5; i++) {
        printf("Value %d: %.20Lf\n", i + 1 , poisson((lambdas[i]),k[i]));
    }
    return 0;
}
