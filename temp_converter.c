#include <stdio.h>

// print Fahrenheit-Celsius table
// for fahr = 0,20, ..., 300 

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

main()
{
    // float fahr, celsius;
    // int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // printf("Fahrenheit-Celsius Conversion Table\n");

    // fahr = lower;
    // while(fahr <= upper) {
    //     celsius = (5.0 / 9.0) * (fahr - 32.0);
    //     printf("%3.0f \t %6.1f\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

    // // print the alternate conversion table
    // printf("Celsius-Fahrenheit Conversion Table\n");

    // lower = 0;
    // upper = 100;
    // step = 10;

    // celsius = lower;
    // while (celsius <= upper) {
    //     fahr = (9.0 * celsius / 5.0) + 32.0;
    //     printf("%6.1f \t %6.1f \n", celsius, fahr);
    //     celsius = celsius + step;
    // }


    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));


}