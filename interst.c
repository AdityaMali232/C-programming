#include <stdio.h>


// this is simple program .

#include <math.h>

int main()
{
    float principle, rate, time, CI;

    /* Input principle, time and rate */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);
//showing the time period
    printf("Enter time: ");
    scanf("%f", &time);
//showing the rate
    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate compound interest */
    CI = principle* (pow((1 + rate / 100), time));

    /* Print the resultant CI */
    printf("Compound Interest = %f", CI);

    return 0;
}