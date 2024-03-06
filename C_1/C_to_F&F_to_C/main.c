#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F , C ;

    printf("pleas enter temperature in C ");
    scanf("%f",&C);

    printf("Celsius C to Fahrenheit F Formula = %.2f",C * 9/5 + 32);


    printf("\n pleas enter temperature in F ");
    scanf("%f",&F);
    printf("Celsius F to Fahrenheit C Formula = %.2f",(32-F) / (9/5.));

    return 0;
}
