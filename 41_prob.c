#include<stdio.h>
#include<string.h>

struct employee{
    int Id;
    char name[50];
    float slary;
};

int main(){
    struct employee e1,e2,e3;

    printf("Employee 1 Id : ");
    scanf("%d", &e1.Id);

    printf("Employee 1 name : ");
    scanf("%s", &e1.name);

    printf("Employee 1 salary : ");
    scanf("%f", &e1.slary);

    
    printf("Employee 2 Id : ");
    scanf("%d", &e2.Id);
    
    printf("Employee 2 name : ");
    scanf("%s", &e2.name);
    
    printf("Employee 2 salary : ");
    scanf("%f", &e2.slary);
    
    printf("Employee 3 Id : ");
    scanf("%d", &e3.Id);

    printf("Employee 3 name : ");
    scanf("%s", &e3.name);

    printf("Employee 3 salary : ");
    scanf("%f", &e3.slary);

    printf("%d %s Rs%.2f\n", e1.Id, e1.name, e1.slary);
    printf("%d %s Rs%.2f\n", e2.Id, e2.name, e2.slary);
    printf("%d %s Rs%.2f\n", e3.Id, e3.name, e3.slary);
    return 0;
}