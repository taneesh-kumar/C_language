#include<stdio.h>

int main(){
    int sub1, sub2, sub3;

    printf("Marks of subject1 : ");
    scanf("%d", &sub1);
    printf("Marks of subject2 : ");
    scanf("%d", &sub2);
    printf("Marks of subject3 : ");
    scanf("%d", &sub3);

    if (sub1 < 33 ||sub2 < 33 || sub3 < 33)
    {
        printf("you have failed for not clearing individual subject cut off");
    } 
    else if (((sub1+sub2+sub3)/3) < 40)
    {
        printf("you have failed for not clearing overall cutoff");
    }
    else
    {
        printf("you have passed");
    }
    
    return 0;
}