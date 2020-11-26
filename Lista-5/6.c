#include <stdio.h>
#include <math.h>

int main()
{
    double pi1, pi2, dif, n;

    pi2 = 4;
    n = -3;

    while ((fabs(pi1 - pi2)) > 5e-6)
    {
        pi1 = pi2 + (4 / n);
        n = -(n - 2);
        pi2 = pi1 + (4 / n);
        n = -(n + 2);

        //printf("pi = %.15lf\n", pi2);
    }

    //printf("\npi1 = %.6lf\n", pi);
    printf("\npi = %.6lf\n\n", pi2);
    //printf("dif = %e\n\n", pi1-pi2);

    return 0;
}