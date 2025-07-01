#include<stdio.h>
float avg_of_three(float, float, float);

int main(){
    float a, b, c;
    printf("Enter the numbers : ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("The avg of three numbers is : %.2f", avg_of_three(a,b,c));    
    return 0;
}
float avg_of_three(float a, float b, float c){
    return ((a+b+c)/3.0);
}