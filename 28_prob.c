#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int* ptr = &arr[0];

    printf("Initially pointing to  %d\n", *ptr);
    
    ptr+=2;
    
    printf("Later pointing to  %d\n", *ptr);

    return 0;
}