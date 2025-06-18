#include<stdio.h>

int main(){
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    printf("The value of num%97 is %d", num%97);

    return 0;
}