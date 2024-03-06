#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Area ;
    float result , length , wedth , radius , base , high ;


    printf("C for circle and R for rectangle and T for right triangle\n\n");
    printf("Please Enter One Character (C or R or T) ");
    scanf("%c",&Area);

    switch(Area){
       case 'R':
       case 'r':
        printf("Please Enter The Length and the Width : ");
        scanf("%f%f",&length , &wedth);
        result = length * wedth ;

         break ;

       case 'C':
       case 'c':
        printf("Please Enter The Radius value : ");
        scanf("%f",&radius);
        result = 3.14 * radius * radius ;

        break ;


       case 'T':
       case 't':
        printf("Please Enter The Base and the High : ");
        scanf("%f%f",&base , &high);
        result =   base * high * 0.5 ;


       break ;


    default :
        printf("Please Reenter a valid character.\n ");
        break; 


    }

        printf("The Area = %.2f\n ",result);

    return 0;
}
