#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Area;
    float result , L , W , r , b  , h ;

    printf("C for circle and R for rectangle and T for right triangle\n\n");
    printf("Pleas Enter One Character (C or R or T) ");
    scanf(" %c",&Area);
    if(Area != 'C' && Area != 'R' && Area != 'T'){
        printf("Pleas Reenter it ");
        return 1 ;
    }
    if(Area=='R'){
        printf("Pleas Enter The Length and the Width : ");
        scanf("%f%f",&L , &W);
        result = L * W ;
    }

    if(Area=='C'){
        printf("Pleas Enter The Radius value : ");
        scanf("%f",&r);
        result = 3.14 * r * r ;
    }

    if(Area=='T'){
        printf("Pleas Enter The Base and the High : ");
        scanf("%f%f",&b , &h);
        result =   0.5 * b * h  ;
    }



        printf("The Area = %.2f\n ",result);


    return 0;
}
