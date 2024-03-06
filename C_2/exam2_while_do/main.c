#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, GDOA = 0, SumP = 0, Pass = 0;
    int i = 0; 

    printf("Please Enter The Number of all Student: ");
    scanf("%d", &n);

    int grade[n];

    while (i < n) { 
        printf("Please Enter the Dgree of the Student %d: ", i);
        scanf("%d", &grade[i]);

        if (grade[i] > 100 || grade[i] < 0) {
            continue; 
        }

        if (grade[i] > GDOA) {
            GDOA = grade[i];
        }
        if (grade[i] >= 60) {
            Pass++;
            SumP += grade[i];
        }

        i++; 
    }

    for (int j = 0; j < n; j++) {
        printf("the dgree of student %d = %d\n", j, grade[j]);
    }

    printf("The number of grades: %d\n", n);
    printf("The number of student how pass the course: %d\n", Pass);
    if (Pass > 0) {
        printf("The Average Dgree of the student who passed the course: %d\n", SumP / Pass);
    } else {
        printf("No student passed the course.\n");
    }
    printf("The GDOA: %d\n", GDOA);
    printf("The percentage of the student who passed the course: %.1f%%\n", (float)Pass / n * 100);

    return 0;
}
