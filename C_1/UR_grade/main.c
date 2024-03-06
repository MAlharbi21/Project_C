#include <stdio.h>
#include <stdlib.h>

int main() {
    int De;
    char result;

    printf("Please Enter Your grade: ");
    scanf("%d", &De);

     if (De >= 90 && De <= 100) {
        result = 'A';

    } else if (De >= 80 && De < 90) {
        result = 'B';

    } else if (De >= 70 && De < 80) {
        result = 'C';

    } else if (De >= 60 && De < 70) {
        result = 'D';
    } else if (De >= 0 && De <= 60) {
        result = 'F';
    }
     else {
        printf("Invalid input");
        return 0 ;
    }

    printf("You got %c\n", result);

    return 0;
}
