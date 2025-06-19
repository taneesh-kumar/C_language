//Write a program to print natural numbers from 10 to 20 When initial loop Counteri is initialized to o
#include<stdio.h>

int main(){
    int num = 0;

    while (num <= 20){
        if(num >= 10){
            printf("%d\t", num);
        }
        num++;
    }
    
    return 0;
}