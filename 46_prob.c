#include<stdio.h>

typedef struct Employee{
    float salary;
    int score;
} Emp;

int main(){
    Emp e1;
    Emp *ptr = &e1;

    printf("Enter the salary of the employee: ");
    scanf("%f", &ptr->salary);

    printf("Enter the score of the employee: ");
    scanf("%d", &ptr->score);

    printf("The salary of the employee and his score are %.2f and %d\n", ptr->salary, ptr->score);
    return 0;
}