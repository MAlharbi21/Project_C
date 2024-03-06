#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n=0,GDOA=0,SumP=0,Pass=0;

    printf("Please Enter The Number of all Student: ");
    scanf("%d",&n);

    int grade[n];

    for(int i=0;i<n;i++){
        printf("Please Enter the Dgree of the Student %d: ",i);
        scanf("%d",&grade[i]);

        if(grade[i]>100 || grade[i]<0){
            i--;
            continue;
            }

        if(grade[i]>GDOA){
            GDOA=grade[i];
        }
        if(grade[i]>=60){
            Pass++;
            SumP+=grade[i];
        }
    }

        for(int i=0;i<n;i++){
            printf("the dgree of student %d =%d\n",i,grade[i]);
        }

        printf("The number of grades:%d\n",n);
        printf("The number of student how pass the course:%d\n",Pass);
        printf("The Average Dgree of the student who passed the course:%d\n",SumP/Pass);
        printf("The GDOA :%d\n",GDOA);
        printf("the percentage of the student who that passed the course %%%.1f \n",(float)Pass/n*100);






    return 0;
}
