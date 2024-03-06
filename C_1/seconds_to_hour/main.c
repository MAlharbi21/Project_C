#include <stdio.h>
#include <stdlib.h>

int main()
{

    int seconds , mints , hours ;

    printf("pleas enter the time in seconds :");
    scanf("%d",&seconds) ;

    hours = seconds/60/60;
    mints = seconds/60%60;
    seconds= seconds%60%60;

    printf("%dH %dM %dS \n",hours,mints,seconds);




    return 0;
}
