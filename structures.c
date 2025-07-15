#include<stdio.h>
#include<string.h>

struct employee{
    int Id;
    char name[50];
    float slary;
};

int main(){
    struct employee e1;
    e1.Id = 1007;
    strcpy(e1.name, "Bond");
    e1.slary = 10000.00;

    printf("%d %s Rs.%.2f", e1.Id, e1.name, e1.slary);

    return 0;
}