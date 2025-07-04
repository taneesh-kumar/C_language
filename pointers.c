#include<stdio.h>

int main(){
    int i = 10;
    int* j = &i;

    printf("Add of i is %u\n", &i);
    printf("Add of i is %u\n", j);
    printf("Add of j is %u\n", &j);

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of j is %d\n", j);

    int** k = &j; //pointer to a pointer
    printf("The add of j is %u\n", k);

    int* p = 6422288;
    printf("The value of p is %u\n", *p);
    return 0;
}