#include <stdio.h>
#include <stdlib.h>

int main()
{


    int NUM1 , NUM2 , result ;
    char operator;

    printf("pleas Enter your operator : (* , + , - , /)");
    scanf("%c",&operator);

    printf("pleas Enter number 1 :");
    scanf("%d",&NUM1);

    printf("pleas Enter number 2 :");
    scanf("%d",&NUM2);


    switch(operator){
        case'*':
        result = NUM1 * NUM2 ;
        break ;
        case'-':
        result = NUM1 - NUM2 ;
        break ;
        case'+':
        result = NUM1 + NUM2 ;
        break ;
        case'/':
        if(NUM2 !=0){
        result = NUM1 / NUM2 ;
        }
        else {
            printf("\aEnter a Number2 > 0 ");
            return 0 ;
        }
        break ;

        default :
        printf("\aTHIS IS NOT AN OPERATOR !\n");
        return 0 ;
}

       printf("THE RESULET : %d\n",result);


    return 0;
}
