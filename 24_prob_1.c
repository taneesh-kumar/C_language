#include<stdio.h>
void print_address(int x){
    printf("The address of x is %u\n", (void*)&x);
}

int main(){
    int i = 543; 
    printf("The address in main is %u\n", (void*)&i);
    print_address(i);
    return 0;
}
// here both the addresses are not equal because only the copy of i used in the function