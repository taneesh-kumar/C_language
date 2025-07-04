#include<stdio.h>//call by reference

void function_mul(int *x){
    *x = (*x) * 10;
    printf("Changed to %d\n", *x);
}

int main(){
    int i = 5;
    printf("current value %d\n", i);
    function_mul((void*)&i);
    return 0;
}