#include<stdio.h>

int main(){

    float pri, time, roi, si;

    printf("principal amt : ");
    scanf("%f", &pri);

    printf("Time period is : ");
    scanf("%f", &time);

    printf("Interest rate : ");
    scanf("%f", &roi);

    si = (pri*time*roi)/100;

    printf("Simple Interest : %.3f", si);
    
    return 0;
}