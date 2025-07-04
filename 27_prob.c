#include<stdio.h>

int main(){
    int x = 256;
    int* ptr = &x;
    int** p2p = &ptr;

    printf("The value of x is %d\n", x);
    printf("The value of ptr is %u\n", ptr);
    printf("The value of p2p is %u\n", p2p);
    
    printf("The address of x is %u\n", &x);
    printf("The address of ptr is %u\n", &ptr);
    printf("The address of p2p is %u\n", &p2p);

    return 0;
}