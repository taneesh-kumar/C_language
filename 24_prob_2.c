#include<stdio.h>

void print_address(int* x){
    printf("The address of x is %u\n", (void*)x);//TYPE CASTING
}

int main(){
    int i = 534;
    printf("The address in main is %u\n", (void*)&i);//TYPE CASTING
    print_address(&i);
    return 0;
}

//here both the addresses are same because we have given the address of i not just the copy
