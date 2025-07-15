#include<stdio.h>
#include<string.h>

struct employee {
    int id;
    char name[50];
    float salary;
};


int main(){

    struct employee e;
    struct employee *ptr = &e;
    e.id = 73;
    printf("%d\n", (*ptr).id);
    printf("%d\n", ptr -> id);//same as above

    return 0;
}