#include<stdio.h>

void function_mul(int x){
    x = (x) * 10;
    printf("function value %d\n", x);
}

int main(){
    int i = 5;
    printf("current value %d\n", i);
    function_mul(i);
    printf("changed value %d\n", i);
    return 0;    
}
//The variable value doesnt change if you call by value