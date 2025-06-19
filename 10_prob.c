#include<stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("enter your digits : ");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    
    if (num1 == num2 && num2 == num3 && num3 == num4){
        printf("all are equal");
    } else if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is the biggest number", num1);
    } else if (num2>num1 && num2>num3 && num2>num4){
        printf("%d is the biggest number", num2);
    } else if (num3>num1 && num3>num2 && num3>num4){
        printf("%d is the biggest number", num3);
    } else{
        printf("%d is the biggest number", num4);
    }

    return 0;
}