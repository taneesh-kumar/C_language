#include<stdio.h>

int main(){
    int age = 19, duration = 5;
    char std[] = "engineering";
    float exp = 2000.00;

    printf("I'm : %d\nCurrently am an %s student\nfor the next %d years\nmonthly expences : %.2f",age,std,duration,exp);
    
    char name[100];
    printf("\ntype your name in : ");
    fgets(name, sizeof(name), stdin);
    printf("your name is %s",name);

    int gap;
    
    printf("How long have you been here for ?\n");
    scanf("%d", &gap);
    printf("so you have been here for  : %d year(s)",gap);

    return 0;
}