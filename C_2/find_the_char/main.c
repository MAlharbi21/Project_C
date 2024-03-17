#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    char c;
    char O[N];

    printf("Please Enter Sentence to find its character:");
    fgets(O,N,stdin);
    printf("please enter any character: ");
    scanf(" %c",&c);

    int find=0;
    int i=0;
    int l=0;

    while(O[i]!='\0'){
        if(O[i]==c){
            find=1;
            l++;
            printf("found at location %d\n",i);
        }
        i++;
    }
    if(find==1){
        printf("character %c found %d\n",c,l);
    }
    else{
        printf("character %c not found ",c);
    }










    return 0;
}
