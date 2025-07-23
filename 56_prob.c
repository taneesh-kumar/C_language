#include<stdio.h>

int main(){
    FILE *ptr = fopen("demo.txt", "w");
    char name1[60], name2[60];
    int sal1, sal2;

    if (ptr == NULL)
    {
        printf("File not found!");
    } else {
        printf("Enter the name of employee 1 : ");
        scanf("%s", &name1);
        printf("Salary of employee 1 :");
        scanf("%d", &sal1);
    
        printf("Enter the name of employee 2 : ");
        scanf("%s", &name2);
        printf("Salary of employee 2 :");
        scanf("%d", &sal2);
    
        fprintf(ptr, "%s, %d", name1, sal1);
        fprintf(ptr, "\n");
        fprintf(ptr, "%s, %d", name2, sal2);        
    }
    
    return 0;
}