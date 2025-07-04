#include<stdio.h>

int* sum(int , int);
float* avg(int , int);

int* sum(int a, int b){
    int sum = a+b;
    int* ptr = &sum;
    printf("The sum is : %d\n", sum);
    return ptr;
}
float* avg(int a, int b){
    float flo = ((a+b)/2.0);
    float* ptr = &flo;
    printf("The avg is : %.2f\n", flo);
    return ptr;
}

int main(){
    int i = 20, j = 30;
    printf("The values of i and j are %d & %d\n", i, j);
    int* ptr1 = sum(i, j);
    float* ptr2 = avg(i, j);
    
    printf("The addreses of sum and avg is %u and %u\n", ptr1, ptr2);
    return 0;
}